#include <iostream>
enum Banks {PKO, BGZ, BRE, BPH};

struct Account {
    Banks bank;
    int balance;
};

struct Person {
    char name[20];
    Account account;
};

struct Couple {
    Person he;
    Person she;
};

const Couple* bestClient(const Couple* cpls,
                         int size, Banks bank) {
    const Couple* best = nullptr;
    int max_balance = INT_MIN;
    for (int i = 0; i < size; ++i) {
        if (cpls[i].he.account.bank == bank || cpls[i].she.account.bank == bank){
            int balance = cpls[i].he.account.balance + cpls[i].she.account.bank;
            if (balance > max_balance){
                max_balance = balance;
                best = &cpls[i];
            }
        }
    }
    return best;
}

int main() {
    using std::cout; using std::endl;
    Couple cpls[] = {
                {{"Jan",{PKO, 1000}}, "Natalia",{BRE, 2000}},
                {"Marcin",{BPH, 2500}, "Jola",{BGZ, -1000}}};
    const Couple* p = bestClient(cpls, 4, BRE);
    if (p)
        cout << p->he.name << " and " << p->she.name
             << ": " << p->he.account.balance +
                        p->she.account.balance << endl;
    else
        cout << "No such couple...\n";
}
