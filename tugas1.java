import java.util.Scanner;
class tugas1 {
    public static void main(String args[]) {
    char[] a = {'a','b','c','d','e'};
    int[][] x = {{1,2}, {3,4}, {5,6}};
    int f = 0;

    Scanner input = new Scanner(System.in);
    System.out.print("Nilai : ");
    int n = input.nextInt();                //Input
    System.out.println("Nilainya : " + n);  //output
    
    if (n % 2 == 0) {
        System.out.println("Bilangan Genap");
    } else {
        System.out.println("Bilangan Ganjil");
    }

    System.out.println("ARRAY 1D");
    for(int i=0; i<5; i++){        //perulangan For & array 1D
        System.out.println("Index " + i + " = " + a[i]);            
    }
    while (f < 5) { //While
        System.out.println("Alfira ");
        f++;
    }
    int e = 0;
    do { //Do while
        System.out.println("Selamat Datang");
    e++;
    }
    while (e < 5);

    System.out.println("ARRAY 2D");
    for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			System.out.print(x[i][j] + "\t");
		}
        System.out.println();
	}
    }
}