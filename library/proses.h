void nilaimhs::proses() {
  cout<<"\nNilai Mahasiswa"<<endl;
  for (int i=0;i<nmhs;i++){
    cout << "------------------------------\n";
    cout << "|  Mahasiswa ke-" << i+1 << "  |\n";
    cout << "------------------------------\n";
    cout << "Nama mhs     = "; cin >> mhs[i];
    cout << "------------------------------\n";
  for (int i=0;i<nmatkul;i++) {
     cout << "------------------------------\n";
    cout << "Mata Kuliah  = "; cin >> matkul[i];
    cout << "Nilai Tugas  = "; cin >> nilai_tgs[i];
    cout << "Nilai UTS    = "; cin >> nilai_uts[i];
    cout << "Nilai UAS    = "; cin >> nilai_uas[i];
    rata[i] = (nilai_tgs[i] + nilai_uts[i] + nilai_uas[i])/3;
    nilai_akhir[i] = (nilai_tgs[i]*0.2)+(nilai_uts[i]*0.35)+(nilai_uas[i]*0.45);
  }
    rattgs += nilai_tgs[i];
    ratuts += nilai_uts[i];
    ratuas += nilai_uas[i];
    ratakhir += nilai_akhir[i];
  }
    rattgs /= nmhs;
    ratuts /= nmhs;
    ratuas/= nmhs;
    ratakhir /= nmhs;
}