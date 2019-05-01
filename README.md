# GOERS coding test from project euler

GOERS Coding test application

1. Sum Square Differnces
Problem ini berisikan mencari selisih dari bilangan yang dijumlahkan yang dipangkatkan 2 dengan penjumlahan dari setiap bilangan yang dipangkatkan 2.

Input : 
1. Memasukkan banyaknya bilangan tidak lebih dari 100 kali, jika lebih dari 100 kali, maka tidak dapat diinputkan.
2. Kemudian Memasukkan bilangan yang ingin dimasukkan sebanyak inputan user.

Algoritma :
Terdapat dua perhitungan :
1. penjumlahan untuk bilangan yang dijumlahkan terlebih dahulu baru dipangkatkan 2 (1 + 2 + 3 + ...)
2. penjumlahan untuk setiap bilangan yang dipangkatkan 2 ( 1^2 + 2^2 + 3^2 + ...)

Perhitungan tersebut dimasukkan kedalam looping untuk setiap bilangan yang diminputkan 
Untuk perhitungan yang pertama, setiap angka dimasukkan akan dijumlahkan hingga angka yang telah diinputkan, lalu disimpan ke dalam variabel bernama total.
Untuk perhitungan yang kedua, sama dengan perhitungan pertama, namun dikalikan dengan angka itu sendiri, kemudian dimasukkan kedalam variabel squaredtotal.

Setelah mendapatkan perhitungan pertama dan kedua. variabel total akan dikalikan dengan total itu sendiri yang disimpan dalam variabel firstsum. Lalu bisa didapatkan selisihnya (differences = firstsum - squaredtotal).

2. Multiplies of 3 or 5
Problem ini berisikan penjumlahan dari bilangan yang memiliki kelipatan 3 dan 5 dibawah 1000.

Algoritma :
Terdapat looping dari 0 hingga 999, kemudian apabila angka dari looping tersebut dapat di mod dengan 3 dan 5, maka akan dimasukkan kedalam penjumlahan variabel sum.

3. Digit Fifth Power
Problem ini berisikan penjumlahan dari hasil setiap bilangan yang dipangkatkan 5

Algoritma :

Untuk mengambil angka dari hasil perpangkatan, sebuah angka akan dimod 10 untuk mendapatkan sisa pembagian yang akan dimasukkan kedalam perhitungan penjumlahan, lalu angkat tersebut akan dibagi 10 untuk mendapatkan hasil pembagian yang akan menghasilkan sisa pembagian selanjutnya.

Lalu untuk mendapatkan hasil penjumlahannya, akan dilakukan looping hingga 354294, jika i adalah bilangan yang sudah dilakukan operasi perpangkatan, maka akan dimasukkan kedalam hasil pertambahan seluruh angka (hingga angka 9).

4. Power Digit Sum

Problem ini berisikan penjumlahan setiap digit angka dari hasil 2^1000

Algoritma :
Menginisiasikan array 0 - 999 menjadi 0 kemudian membuat array ke 999 berisi 2, lalu dilakukan looping sebanyak 1000 kali untuk mendeklarasikan pangkatnya, lalu array yang telah dimasukkan ke dalam looping dikalikan dengan 2, hasilnya akan di bagi 10 dan di mod 10 untuk mendapatkan penjumlahan dari setiap digit hasil perpangkatan yang telah dikalikan dengan array yang sudah di looping 1000 kali sebelumnya, kemudian hasilnya akan di print.

5. Largest Prime Factor

Problem ini berisikan tentang faktor prima terbesar dari 600851475143

Algoritma :
melakukan pembagian dari 2 hingga 600851475143/2, seperti pada faktorisasi biasanya, setiap pembagian akan meningkat angka pembaginya, maka dilakukan looping tersebut, lalu apabila 600851475143 dibagi dengan looping tersebut tidak menyisakan sisa pembagian, maka 600851475143 akan dibagi dengan pembagi selanjutnya hingga 600851475143/2
