void nilaimhs::output(){
  cout<<endl;
  cout<<"======================================"<<endl;
  cout<<"\t\tDAFTAR NILAI MAHASISWA"<<endl;
  cout<<"======================================"<<endl;
  for(int i=0; i<nmhs; i++){
    cout<<"======================================"<<endl;
    cout<<"\tNama"<<i+1<<": "<<mhs[i]<<endl;
    for (int i=0; i<nmatkul; i++){
    cout<<"\tMata Kuliah  :"<<matkul[i]<<endl;
    cout<<"\t\tNilai Tugas\t= "<<nilai_tgs[i]<<endl;
    cout<<"\t\tNilai UTS\t= "<<nilai_uts[i]<<endl;
    cout<<"\t\tNilai UAS\t= "<<nilai_uas[i]<<endl;
    cout<<"\t\tNilai Akhir\t= "<<nilai_akhir[i]<<endl;
   }
    cout<<" Rata-rata nilai Tugas\t= "<<rattgs<<endl;
    cout<<" Rata-rata nilai UTS\t= "<<ratuts<<endl;  
    cout<<" Rata-rata nilai UAS\t= "<<ratuas<<endl;
    cout<<" Rata-rata nilai Akhir\t= "<<ratakhir<<endl;
    cout<<"======================================"<<endl;
  }
}