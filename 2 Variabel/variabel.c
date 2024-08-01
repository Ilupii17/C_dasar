#include <stdio.h>

	/*
	ada 3 macam variabel yaitu 
	- int = integer atau bilangan bulat contohnya 123
	- float = yaitu bilangan decimal contohnya 2,4 atau 120,1
	- char = menyimpan 1 karakter contohnya 'a' atau 'b' {dengan catatan
		karakter harus dikelilingi tanda kutip 1 ' ' }
	*/

int main()
{
	/*
	Deklarasi variabel, Untuk membuat variabel tentukan jenisnya dan tetapkan nilainya
	contoh:
	- type namaVariabel = nilai;
	- int nilai = 1;
	{oh iya setiap angka tidak memakai tanda kutip 1 '', ini berlaku hanya pada char}
	*/

	int nilai = 10;
	float nilaiDecimal = 10.99;
	char huruf = 'A';

	/*
	jika ingin menampilkan nilai pada variabel kita tidak bisa langsung memprint nya
	dalam bahasa c ada yang namanya penentu format variabel yang di mulai dengan % di
	ikuti dengan karakter.

	sebagai contoh output value dari int, menggunakan format penentu %d di ikuti dengan
	double quote " " di dalam fungsi printf()

	untuk memprint variabel lain menggunakan %d untuk int, %c untuk char, 
	dan %f untuk float.
	*/

	printf("%d\n", nilai);
	printf("%f\n", nilaiDecimal);
	printf("%c\n", huruf);

	// contoh lain
	printf("nilai saya adalah : %d\nDan Huruf saya adalah : %c",nilai,huruf);
	printf("\n\n");



	// Mengganti atau mengubah nilai dari variabel
	int tes = 10;
	tes = 20; // ini secara langsung menimpa nilai awal a yaitu 10 menjadi a = 20
	printf("Nilai a sekarang adalah : %d\n",tes);

	// Kamu juga bisa menimpa variabel satu dengan lainnya, contoh :
	int myValue = 99; // nilai awal = 99
	int myOtherValue = 25; // membuat variabel baru

	myOtherValue = myValue; // menjadikan myOtherValue sebagai myValue yang berisi 99 
	// sekarang myOtherValue yang tadinya 25 sekarang diganti menjadi 99
	printf("myOtherValue = %d\n", myOtherValue);

	// contoh lain menggunakan operator mtk sederhana
	int a = 5;
	int b = 7;
	int sum = a + b;
	printf("jumlah a + b = %d\n",sum);
	printf("\n\n");



	// Deklarasi beberapa variabel secara bersamaan
	int x = 10, y = 15, z = 20; // hanya dipisah dengan tanda koma
	printf("%d\n", x + y + z);

	//contoh lain
	int h,i,j;
	h = i = j = 50;
	int jum = h + i + j;
	printf("%d\n\n\n",jum);

	/*
	PENAMAAN VARIABEL
	- tidak boleh angka
	- tidak boleh ada simbol seperti %$#@! dan sebagainya kecuali _ (strip bawah)
	*/

	// Contoh penggunaan di dunia nyata 

	int id_siswa = 234;
	int nilai_rata_rata = 90;
	int umur = 16;
	char tingkat = 'A';
	printf("Penggunaan Real\n");
	printf("ID Siswa        : %d\n",id_siswa);
	printf("Nilai Rata Rata : %d\n",nilai_rata_rata);
	printf("Umur Siswa      : %d\n",umur);
	printf("Tingkat         : %d\n",tingkat);

	return 0;
}