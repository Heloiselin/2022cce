//���O����{���A�u�n�g�@�Ө��
//�P�_�j��A�n�Ψ쪺�ޥ��G�ϥ�for�j��Aif�P�_�Awhile�j��
bool isPalindrome(int x) {
    int x2 = x;
    int r = 0; //�ϹL�Ӫ��Ʀr�A���@�U�n��br�̭�
    while(x>0)
    {
        r = r*10 + x%10; //���
        x = x/10;
    }
    if(x2 == r) return true;
    else return false;
}
