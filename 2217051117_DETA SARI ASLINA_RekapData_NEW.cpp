#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	/*DETA SARI ASLINA
	2217051117
	KELAS D
	PRAKTEST DDP*/

    int fisika[10], matematika[10], biologi[10], kimia[10];
    int banyak_data;
    char nama[10][10];
 
    float jumlah[10], fisika_jumlah = 0,matematika_jumlah = 0,kimia_jumlah = 0,biologi_jumlah = 0;
    float rata_siswa[10], rata_fisika, rata_matematika, rata_kimia, rata_biologi;

    cout << "Masukan banyak data : ";
    cin >> banyak_data;

    for (int i = 0; i < banyak_data; i++){
        cout << "----------------------------\n";
        cout << "Data ke - "<< i + 1 << endl;
        cout << "----------------------------\n";
        cout << "Nama \t : ";
        cin >> nama[i];
        cout << "Nilai Fisika\t : ";
        cin >> fisika[i];
        cout << "Nilai Matematika : ";
        cin >> matematika[i];
        cout << "Nilai Kimia\t : ";
        cin >> kimia[i];
        cout << "Nilai Biologi\t : ";
        cin >> biologi[i];

        jumlah[i] = fisika[i] + matematika[i] + biologi[i] + kimia[i];
        rata_siswa[i] = jumlah[i] / 4;
        
        fisika_jumlah = fisika_jumlah + fisika[i];
        matematika_jumlah = matematika_jumlah + matematika[i];
        kimia_jumlah = kimia_jumlah + kimia[i];
        biologi_jumlah = biologi_jumlah + biologi[i];
        
        rata_fisika = fisika_jumlah / banyak_data;
        rata_matematika = matematika_jumlah / banyak_data;
        rata_kimia = kimia_jumlah / banyak_data;
        rata_biologi = biologi_jumlah / banyak_data;
    }
    
    cout<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<< setw(5) <<"No" <<setw(10) << "Nama"
		<< setw(15)<< "Fisika" << setw(20) << "Matematika"
		<< setw(15)<< "Kimia" << setw(15) <<"Biologi\n";
	cout<<"--------------------------------------------------------------------------------"<<endl;
	
	for (int i = 0; i <banyak_data;i++){
		int no = i+1;
		cout<< setw(5) << no <<setw(10) <<nama[i]
		<< setw(13) <<fisika[i] << setw(18) <<matematika[i]
		<< setw(16) <<kimia[i] << setw(15) <<biologi[i]<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;	
}
    cout << "\n\nRata - Rata Tiap Mahasiswa :\n";
    for(int i = 0; i < banyak_data; i++){
    cout << nama[i] << "\t : "<<rata_siswa[i] << endl;
}
    cout << "\nRata -Rata Mata Kuliah\n";
    cout << "Fisika\t   : " << rata_fisika << endl;
    cout << "Matematika : " << rata_matematika << endl;
    cout << "Kimia\t   : " << rata_kimia << endl;
    cout << "Biologi\t   : " << rata_biologi << endl;
    return 0;
}
