# include  < iostream >
# include  < ������ >

�������������  ������������ ����  std ;

���
main () {
    // ���� ������
    size_t number_count;
    cerr << " ������� �����: " ;
    cin >> number_count;

    cerr << " ������� �����: " ;
    vector < double > numbers (number_count);
    for ( size_t i = 0 ; i <number_count; i ++) {
        cin >> ����� [i];
    }

    size_t bin_count;
    cerr << " ������� ���������� ��������: " ;
    cin >> bin_count;

    // ��������� ������
    double min = ����� [ 0 ];
    double max = ����� [ 0 ];
    ��� ( ������� �����: �����) {
        if (����� <���) {
            ��� = �����;
        }
        if (number> max) {
            max = �����;
        }
    }

    ������ < size_t > �������� (bin_count);
    ��� ( ������� �����: �����) {
        size_t bin = ( size_t ) ((����� - ���) / (�������� - ���) * bin_count);
        if (bin == bin_count) {
            bin--;
        }
        ������� [���] ++;
    }

    // ����� ������
    const  size_t SCREEN_WIDTH = 80 ;
    const  size_t MAX_ASTERISK = SCREEN_WIDTH - 4 - 1 ;

    size_t max_count = 0 ;
    ��� ( size_t count: bins) {
        if (count> max_count) {
            max_count = ����������;
        }
    }
    const  bool scaling_needed = max_count> MAX_ASTERISK;

    ��� ( size_t bin: bin) {
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

        for ( size_t i = 0 ; i <������; i ++) {
            cout << ' * ' ;
        }
        cout << ' \ n ' ;
    }

    �������  0 ;
}
