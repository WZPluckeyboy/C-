//����Ŀ���������forѭ��),���ڻ����������������������������ǳ����
import java.util.Arrays;
public class Test{
    public static void main(String[] args) {
        int[]array={1,2,3,4,5,6,7,8};
        int[]array2=new int[array.length];
        System.out.println (Arrays.toString ( array ) );
        System.out.println (Arrays.toString(array2) );
        for(int i=0; i<array.length;i++){
            array2[i]=array[i];
        }
        array2[0]=99
        System.out.println (Arrays.toString ( array ) );
        System.out.println (Arrays.toString(array2) );
    }
}






//����Ŀ���������Ŀ�¡�����ڻ����������������������������ǳ����
/*import java.util.Arrays;
public class Test{
    public static void main(String[] args) {
        int[] array = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int[] array2 = new int[array.length];
        System.out.println ( Arrays.toString ( array ) );
        System.out.println ( Arrays.toString ( array2 ) );
        array2=array.clone();
        System.out.println ( Arrays.toString ( array ) );
        System.out.println ( Arrays.toString ( array2 ) );

    }
}*/




//���ֲ��Һ���������
/*
import java.util.Arrays;
import java.util.Scanner;
public class Test {
    public static void main(String[] args) {
int[]array=new int[]{1,18,5,32,44,25,19,40,56};
        System.out.println (Arrays.toString ( array ));
        Arrays.sort ( array );//��������
        System.out.println (Arrays.toString ( array ));
       Scanner input=new Scanner(System.in);//��������һ����
       int i=input.nextInt();
        int index=Arrays.binarySearch(array,i);  //���ֲ��ҷ�
        System.out.println (index);
    }
}
*/



/*
//��ά����Ķ�̬��ʼ��
import java.util.Arrays;
public class Test{
    public static void main(String[] args) {
        int[][] array = new int[2][3];
        //array2[0][0] = 9;
        System.out.println(Arrays.deepToString(array));
        int[][] array3 = new int[2][];
        array3[0] = new int[3];
        array3[1] = new int[2];
        System.out.println(Arrays.deepToString(array3));

    }

}*/

//��ӡ��ά����ڶ��ַ���
/*import java.util.Arrays;
public class Test {
    public static void showArray(int[][] array) {
        System.out.println(Arrays.deepToString ( array ));

    }

    public static void main(String[] args) {
        int[][]array=new int[][]{{1,2},{1,2,3},{1,2,3,4},{1,2,3,4,5},{1,2,3,4,5,6,7}};
        showArray(array);

    }
}*/



    //��ӡ��ά���鷽��һ
    /* public static void showArray(int[][] array) {
        for (int i=0;i<array.length;i++) {
            for (int j = 0; j < array[i].length; j++) {
                System.out.print(array[i][j] + " ");
            }
            System.out.println();
        }

    }
    public static void main(String[] args) {
        int[][] array = new int[][]{{1, 2}, {3, 4, 5}, {6, 7}, {8, 5}};
        showArray( array );
    }
}*/


   //��ӡһά���鷽����
   /* public static void showArray(int[] array) {
        System.out.println(Arrays.toString(array));
    }
    public static void main(String[] args) {
        int[]array=new int[]{1,2,3,4};
        showArray( array );
    }
}*/
    //��ӡһά���鷽��һ
   /* public static void showArray(int[] array) {
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i]+" ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[]array=new int []{1,2,3,4,4,5};
        showArray(array);
    }
}*/