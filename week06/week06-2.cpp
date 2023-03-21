//不是完整程式，只要寫一個函示
//判斷迴文，要用到的技巧：使用for迴圈，if判斷，while迴圈
bool isPalindrome(int x) {
    int x2 = x;
    int r = 0; //反過來的數字，等一下要放在r裡面
    while(x>0)
    {
        r = r*10 + x%10; //剝皮
        x = x/10;
    }
    if(x2 == r) return true;
    else return false;
}
