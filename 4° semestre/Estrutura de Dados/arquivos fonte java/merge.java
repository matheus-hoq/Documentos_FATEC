/*Matheus Henrique de Oliveira Querido*/

public class merge {

  public static void merge(int[] esqArray,int[] dirArray, int[] arr,int esqTam, int dirTam){

      int i=0,l=0,r = 0;
      while(l<esqTam && r<dirTam){

          if(esqArray[l]<dirArray[r]){
              arr[i++] = esqArray[l++];
          }
          else{
              arr[i++] = dirArray[r++];
          }
      }
      while(l<esqTam){
          arr[i++] = esqArray[l++];
      }
      while(r<dirTam){
        arr[i++] = dirArray[r++];
      }
  }

  public static void mergeSort(int [] arr, int len){
      if (len < 2){return;}

      int mid = len / 2;
      int [] esqArray = new int[mid];
      int [] dirArray = new int[len-mid];

      int k = 0;
      for(int i = 0;i<len;++i){
          if(i<mid){
              esqArray[i] = arr[i];
          }
          else{
              dirArray[k] = arr[i];
              k = k+1;
          }
      }
      mergeSort(esqArray,mid);
      mergeSort(dirArray,len-mid);
      merge(esqArray,dirArray,arr,mid,len-mid);
  }

  public static void main( String args[] ) {
        int [] array = {12,1,10,50,5,15,45};
        mergeSort(array,array.length);
        for(int i =0; i< array.length;++i){
            System.out.print(array[i]+ " ");
        }
    }
}
