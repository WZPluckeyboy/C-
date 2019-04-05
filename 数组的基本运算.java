//数组的拷贝（运用for循环),对于基本类型是深拷贝，对于引用类型是浅拷贝
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






//数组的拷贝（数组的克隆）对于基本类型是深拷贝，对于引用类型是浅拷贝
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




//二分查找和数组排序
/*
import java.util.Arrays;
import java.util.Scanner;
public class Test {
    public static void main(String[] args) {
int[]array=new int[]{1,18,5,32,44,25,19,40,56};
        System.out.println (Arrays.toString ( array ));
        Arrays.sort ( array );//数组排序
        System.out.println (Arrays.toString ( array ));
       Scanner input=new Scanner(System.in);//任意输入一个数
       int i=input.nextInt();
        int index=Arrays.binarySearch(array,i);  //二分查找法
        System.out.println (index);
    }
}
*/



/*
//二维数组的动态初始化
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

//打印二维数组第二种方法
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



    //打印二维数组方法一
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


   //打印一维数组方法二
   /* public static void showArray(int[] array) {
        System.out.println(Arrays.toString(array));
    }
    public static void main(String[] args) {
        int[]array=new int[]{1,2,3,4};
        showArray( array );
    }
}*/
    //打印一维数组方法一
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