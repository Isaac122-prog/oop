double array_mean(int array[], int n){
    if (n < 1){
        return 0.0;
    }
    float average = 0;
    float sum = 0;
    for (int i = 0; i < n; i++){
        sum = array[i] + sum;
    }
    average = sum / n;
    return average;
}