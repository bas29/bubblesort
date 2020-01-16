#include<stdio.h>
#include<conio.h>

void bubblesort (int data[], int n)//parameter bubblesort
{
	int i, j = 0, temp, flag = 1;//variabel dannpenetapan nilai fungsi
	while (flag)//instruksi perulangan DO-WHILE & FOR
	{
		flag = 0;
		for(i = 0; i < n; i++)
		{//proses pengurutan angka dengan operator logika
			if(data[i] > data[i + 1])
			{
				temp = data[i];
				data[i] = data[i + 1];
				data[i + 1] = temp;
				flag++;
			}
		}
	}
}
main()
{
	int data[1000]; // variabel array dengan elemen 1000
	int n, i, j;//variabel
	printf("______.:: BUBBLE SORT ::.______\n");
	printf("Masukan Angka (max 1000) : ");
	scanf("%d", &n);//input jumlah elemen yang di gunakan
	printf("Data (pisahkan angka dengan spasi) : ");//masukann di pisah dengan spasi
	for(i = 0; i < n; i++)//perulangan untuk memasukan angka
	{
		scanf("%d", &data[i]);
	}
	bubblesort (data, n);//pemanggilan fungsi
	printf("\nOutput after sort : \n");//menampilkan hasil sort dengan instruksi for
	for(j = 0; j < n; j++)
	{
	printf("%d ", data[j]);
	}
	getch();
	return 0;

}
