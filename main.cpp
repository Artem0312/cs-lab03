# include  < iostream >
# include  < вектор >

использование  пространства имен  std ;

ИНТ
main () {
    // Ввод данных
    size_t number_count;
    cerr << " Введите число: " ;
    cin >> number_count;

    cerr << " Введите цифры: " ;
    vector < double > numbers (number_count);
    for ( size_t i = 0 ; i <number_count; i ++) {
        cin >> цифры [i];
    }

    size_t bin_count;
    cerr << " Введите количество столбцов: " ;
    cin >> bin_count;

    // Обработка данных
    double min = числа [ 0 ];
    double max = числа [ 0 ];
    для ( двойное число: числа) {
        if (число <мин) {
            мин = число;
        }
        if (number> max) {
            max = число;
        }
    }

    вектор < size_t > бункеров (bin_count);
    для ( двойное число: числа) {
        size_t bin = ( size_t ) ((число - мин) / (максимум - мин) * bin_count);
        if (bin == bin_count) {
            bin--;
        }
        Бункеры [бен] ++;
    }

    // Вывод данных
    const  size_t SCREEN_WIDTH = 80 ;
    const  size_t MAX_ASTERISK = SCREEN_WIDTH - 4 - 1 ;

    size_t max_count = 0 ;
    для ( size_t count: bins) {
        if (count> max_count) {
            max_count = количество;
        }
    }
    const  bool scaling_needed = max_count> MAX_ASTERISK;

    для ( size_t bin: bin) {
        if (bin < 100 ) {
            cout << '  ' ;
        }
        if (bin < 10 ) {
            cout << '  ' ;
        }
        cout << bin << " | " ;

        size_t height = bin;
        if (scaling_needed) {
            const  double scaling_factor = ( double ) MAX_ASTERISK / max_count;
            height = ( size_t ) (bin * scaling_factor);
        }

        for ( size_t i = 0 ; i <высота; i ++) {
            cout << ' * ' ;
        }
        cout << ' \ n ' ;
    }

    вернуть  0 ;
}
