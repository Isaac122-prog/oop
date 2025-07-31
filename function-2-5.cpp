bool is_descending(int array[], int n){
    if(n <= 0) {
        return false;
    }
    for(int i = 0; i < n; i++){
        if(array[i+1] < array[i]){
            return false;
        } else {
            return true;
        }
    }
}