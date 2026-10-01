#include <iostream>
#include <getopt.h>
#include <set>
#include <string>

// Фіктивні обробники для ключів
void handleHelp() {
    std::cout << "Arg: Help\n";
}

void handleVersion() {
    std::cout << "Arg: Version\n";
}

void handleList() {
    std::cout << "Arg: List\n";
}

int main(int argc, char* argv[]) {
    // Масив для довгих ключів
    const struct option long_options[] = {
        {"help",    no_argument, nullptr, 'h'},
        {"version", no_argument, nullptr, 'v'},
        {"list",    no_argument, nullptr, 'l'},
        {nullptr,   0,           nullptr,  0 }
    };

    // Використовуємо множину (set), щоб автоматично відкидати дублікати
    std::set<char> processed_args;
    int opt;
    int option_index = 0;

    // Цикл розбору аргументів за допомогою getopt_long
    // "hvl" - це список коротких ключів
    while ((opt = getopt_long(argc, argv, "hvl", long_options, &option_index)) != -1) {
        switch (opt) {
            case 'h':
            case 'v':
            case 'l':
                processed_args.insert(opt); // Додаємо у множину (дублікати ігноруються)
                break;
            case '?':
                // getopt_long сама виводить повідомлення про невідомий ключ,
                // але ми додаємо своє попередження за завданням.
                std::cerr << "Warning: Unknown parameter found and ignored.\n";
                break;
            default:
                break;
        }
    }

    // Викликаємо обробники тільки для унікальних знайдених ключів
    for (char arg : processed_args) {
        if (arg == 'h') handleHelp();
        if (arg == 'v') handleVersion();
        if (arg == 'l') handleList();
    }

    return 0;
}
