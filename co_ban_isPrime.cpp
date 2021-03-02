//Một số nguyên tố là một số tự nhiên lớn hơn 1 và không thể tạo thành từ tích của hai số tự nhiên nhỏ hơn.

//Ví dụ số 2, 3, 5 được gọi là số nguyên tố

//Viết một hàm xác định xem một số nguyên dương đã cho có phải là số nguyên tố hay không.
bool isPrime(int n)
{
    if(n>2){
        for(int i=2; i<n; i++){
            while(n%i==0){
                return false;
                break;
            }
        }
        return true;
    } else{
        return false;
    }
}
