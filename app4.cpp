// menampilkan data dengan perintah satu persatu
    cout << "data pertama = " << datamu[0] << endl;
    cout << "data kedua = " << datamu[1] << endl;
    cout << "data ketiga = " << datamu[2] << endl;
    cout << "data keempat = " << datamu[3] << endl;
    cout << "data kelima = " << datamu[4] << endl;

    // mengisi data melalui perulangan
    for (int i = 0; i <= 4; i++)
    {
        cout << "Isikan data ke-" << (i + 1) << " : ";
        cin >> datamu[i];
    }

    // menampilkan data dengan perulangan
    for (int i = 0; i <= 4; i++)
    {
        cout << "Data ke-" << (i + 1) << " : " << datamu[i] << endl;
    }