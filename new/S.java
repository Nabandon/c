public class S {
    public boolean findMagicIndex(int[] A, int n) {
        // write code here
        int left=0;
        int right=n-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(A[mid]==mid){
                return true;

            }else if(A[mid]>mid){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return false;
    }
}
