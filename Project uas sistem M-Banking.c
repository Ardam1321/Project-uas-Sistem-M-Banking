

#include <stdio.h>
#include <stdlib.h>

  int main(){

  int pilih;

    ulang1:

    system("cls");
    printf("=====================================\n");
    printf("            Bank Informatika \n");
    printf("=====================================\n");
    printf("1. Membuat Akun \n");
    printf("2. Deposit \n");
    printf("3. Cek Saldo \n");
    printf("4. transfer \n");
    printf("5. Cek Pin \n");
    printf("6. Riwayat Transaksi \n");
    printf("=====================================\n");
    printf("Pilih : ");
    scanf("%d",&pilih);
    system("cls");


    if (pilih == 1){

    int pin;
    char nama[50],email[50];

    ulang:
    system("cls");
    getchar();





    printf("=====================================\n");
    printf("            Membuat Akun \n");
    printf("=====================================\n");
    printf("Nama           : ");
    gets(nama);
    printf("Email          : ");
    gets(email);
    printf("Pin (6 digit)  : ");
    scanf("%d",&pin);


    if (pin>=100000 && pin<1000000){


    int i=0;
    int pilih2,depo,pin2,saldo=0,penarikan[99],penerima[99];
    int a=0;
    char nama1[99][99];


    printf("Pendaftaran Anda Berhasil...\n");
    system("PAUSE");
    system("cls");

    ulang3:
    i=0;
    system("cls");


    printf("=====================================\n");
    printf("           Bank Informatika\n");
    printf("=====================================\n");
    printf("Nama           : %s \n",nama);
    printf("Email          : %s \n",email);
    printf("Pin            : ****** \n");
    printf("=====================================\n");
    printf("1. Membuat Akun \n");
    printf("2. Deposit \n");
    printf("3. Cek Saldo \n");
    printf("4. transfer \n");
    printf("5. Cek Pin \n");
    printf("6. Riwayat Transaksi \n");
    printf("7. Logout \n");
    printf("=====================================\n");
    printf("Pilih : ");
    scanf("%d",&pilih2);

        if (pilih2 == 1){
        system("cls");
        printf("=====================================\n");
        printf("            Membuat Akun\n");
        printf("=====================================\n");
        printf("Anda Sudah Memiliki Akun \n");
        system("PAUSE");
        goto ulang3;
        }
        
        else if (pilih2 == 2){
        system("cls");
        do{
        system("cls");
        printf("=====================================\n");
        printf("            Deposit\n");
        printf("=====================================\n");

        i++;

        printf("Masukkan Pin Anda (6 digit): ");

        scanf("%d",&pin2);

            if (pin2 == pin){
            printf("Pin Anda Benar... \n\n");
            printf("Masukkan Jumlah Nominal : ");
            scanf("%d",&depo);

            saldo=saldo+depo;
            printf("Deposit Anda Berhasil...\n");

            system("PAUSE");

            goto ulang3;
            }
           
            else {
            printf("Pin Anda Salah... \n");
            system("PAUSE");
            }

    }while(i<3);
        if(i>=3){
            system ("cls");
            printf("=====================================\n");
            printf("            Akses Ditolak \n");
            printf("=====================================\n");
            printf("Akun Anda Di Tangguhkan Silahkan \nHubungi Customer Service \n");
            return 0;
    }

        }



    else if (pilih2 == 3){
        system("cls");
        do{
        system("cls");
        printf("=====================================\n");
        printf("            Cek Saldo \n");
        printf("=====================================\n");

        i++;

        printf("Masukkan Pin Anda (6 digit): ");
        scanf("%d",&pin2);

            if (pin2 == pin){
            printf("Pin Anda Benar... \n\n");


            printf("Saldo Anda Saat Ini :Rp.%d \n",saldo);
            system("PAUSE");

            goto ulang3;
            }

    else{
        printf("Pin Anda Salah... \n");
        system("PAUSE");
        }

        }while(i<3);
            if (i>=3){
                system ("cls");
                printf("=====================================\n");
                printf("            Akses Ditolak \n");
                printf("=====================================\n");
                printf("Akun Anda Di Tangguhkan Silahkan \nHubungi Customer Service \n");
                return 0;
            }

    }

        else if (pilih2 == 4){
        system("cls");
        do{
        system("cls");
        printf("=====================================\n");
        printf("            Transfer \n");
        printf("=====================================\n");


        i++;


        printf("Masukkan Pin Anda (6 digit): ");
        scanf("%d",&pin2);

            if (pin2 == pin){

                a=a+1;

            printf("Pin Anda Benar... \n\n");
            printf("Masukkan Nomor Akun Penerima : ");
            scanf("%d",&penerima[a]);
            getchar();
            printf("Nama : ");
            gets(nama1[a]);
        
            if (penerima[a]>=100000 && penerima[a]<1000000){

                printf("Masukkan Nominal : ");
                scanf("%d",&penarikan[a]);

                
                if (penarikan[a] <= saldo){

                    saldo=saldo-penarikan[a];

                    printf("Transfer Anda Berhasil....\n");
                    system("PAUSE");
                    goto ulang3;
                }
                else {

                    a=a-1;

                    printf("Saldo Anda Tidak Cukup \n");
                    system("PAUSE");
    
                    goto ulang3;
                    }
        }

         else{
            a=a-1;
            printf("Nomor Rekening Penerima Salah...\n");
            system("PAUSE");
           goto ulang3;
           }

    }

      else{
        printf("Pin Anda Salah... \n");
        system("PAUSE");
        }
    
    }while(i<3);
        
        if(i>=3){
            system ("cls");
            printf("=====================================\n");
            printf("            Akses Ditolak \n");
            printf("=====================================\n");
            printf("Akun Anda Di Tangguhkan Silahkan \nHubungi Customer Service \n");
            return 0;
    }


    }

        else if (pilih2 == 5){
        system("cls");
        printf("=====================================\n");
        printf("            Cek Pin \n");
        printf("=====================================\n");
        printf("Pin Anda Adalah : %d\n ",pin);
        system("PAUSE");
        goto ulang3;
    }

        else if (pilih2 == 6){

        system("cls");
        printf("=====================================\n");
        printf("          Riwayat Transaksi \n");
        printf("=====================================\n");

            if(a>=1){
            for(int j=1;j<=a;j++){
            printf("            Transaksi Ke %d \n",j);
            printf("=====================================\n");
            printf("Nama                    :%s\n",nama1[j]);
            printf("Nomor Akun              :%d\n",penerima[j]);
            printf("Mengirim Saldo Sebanyak :Rp.%d \n",penarikan[j]);
            printf("=====================================\n");
            }
            system("PAUSE");

            goto ulang3;
            }
            else if(a<1){
                printf("Maaf Anda Belum Melakukan Transaksi Sebelum nya \n");
                system("PAUSE");
            goto ulang3;
            }


    }



            else if (pilih2 == 7){
            system("cls");
            printf("=====================================\n");
            printf("            Logout \n");
            printf("=====================================\n");

            printf("Terimakasih Telah Menggunakan Aplikasi ini \n");
            system("PAUSE");

            return 0;
    }


    else if (pilih2>=8||0){

        system("PAUSE");

        printf("Angka Yang Anda Inputkan Tidak Ada \n");


        goto ulang3;
    }

    }


    else  {
        printf("\n");
        system("cls");
        printf("Pin Yang Anda Masukkan Tidak Valid \n\n");
        system("PAUSE");

        goto ulang;

    }




    }

    else if (pilih>=7){
    system("cls");
    printf("Menu Yang Anda Pilih Tidak Ada \n");
    system("PAUSE");
    }

    else if (pilih == 2||3||4||5||6) {
    system("cls");
    printf("Anda Belum Memiliki Akun Silahkan Daftar Terlebih Dahulu \n\n");
    system("PAUSE");
    }


goto ulang1;

}
