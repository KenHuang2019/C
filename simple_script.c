
#include <stdio.h> // C�y�����зǪ� I/O Library , ���q���i�H��@�~�t�η��q�A��������U�� main function

int main(void) // �ݩw�q��function���槹�n�^�Ǫ���ƫ��O(���B�Hint����)�Avoid ���N��O���a�J����Ѽƶi��o��function
{   // �j�A��{}�]���������٬��@�Ӱ϶��A�����϶��}�l

    /* �򥻿�X���� �}�l */
    // printf�O�ƥ��g�n��function�A���L�W�誺 #include�ޤJ���ϥ�
	printf( //print�O�����@�~�t�ο�X�᭱���r�bcmd�W���N��Af�Oformat�A���{���̷Ӿ\Ū\n�o������r���i�洫�浥�榡�ưʧ@
        "Hello World!" // �����r��g�k�A�q�`�����޸� " �]�����
    );

    printf("�ƻ�O����r��? �|�Ҩӻ�:\\n�O����\n<-�o�䦳�@��\\n\n"); // �z�L�ϱ׽u�i���S�w�g�k����S�w�\��A�H����ܽd����\n�i���洫��\��A\\�h���@�몺�ϱ׽u�i�����\��ʳQ�C�L��Ӥϱ׽u�bcmd�W
	// ��L�g�k�i�Ѧҳo�̪�����Ghttps://ignatius1895.pixnet.net/blog/post/285538039-c-%E8%AA%9E%E8%A8%80%E6%95%99%E5%AD%B8---06---%E8%BC%B8%E5%87%BA%E6%96%87%E5%AD%97

    // printf �i�Ϧh�լ۾F�r��۰ʵ��X�A�B�b�A�����i����
    printf(
        "�Ĥ@��  �֡@�@�@�֡@�עעעע�\n"
        "�ĤG��  �֡@�@�@�֡@�@�@�ס@�@\n"
        "�ĤT��  �֢֢֢֢֡@�@�@�ס@�@\n"
        "�ĥ|��  �֡@�@�@�֡@�@�@�ס@�@\n"
        "�Ĥ���  �֡@�@�@�֡@�עעעע�\n"
    ); // �Y�����ϧο�X�A�i�γo�ؤ覡�g�A�iŪ�ʸ���
    /* �򥻿�X���� ���� */

    /* �Ʀr�ާ@���� �}�l */
    // �H��Ʀr�ۥ[�{�����ܽd�A�{���\��O���ϥΪ̦bcmd��J��ӼƦr��A�N��M�^�ǵ��ϥΪ�
    // �]���ڭ̤��T�w�ϥΪ̷|���ƻ�Ʀr�A�u������w�{���w�d�O����Ŷ��A�ҥH�ݭn���]�w"�ܼ�"
    int number1; // �]�w�ܼƪ��ʧ@�s��"�ŧi"�A�ݥ����w��ƫ��O�A���B��int�N��O��ơAnumber1����m�O�ܼƦW��(�i�ۦ�w�q)
    int number2, sum; // �Y�ۦP�ƾ����O�A�i�b�P�@��H�r���j�}������
    // ���F�O����Ŷ���A�ڭ̭n�����ϥΪ̴��ܡA�ХL��J�Ʀr
    printf("Please enter the first integer : ");
    // �A�ӭn��ϥΪ̿�J���Ʀr���O���餺
    scanf_s("%d", &number1); // �o��function�@�˨Ӧ�srdio.h�A�i�H�q��LŪ�J��ơA�]����J����ƥi�H���ܦh�ءA�ҥH�ݫ��w��ƺ���
    // �H�����ҡA�Ĥ@�ӰѼƴN�O�Ψӫ��w��ƺ��� %d �� d �O��decimal�A�N�O�ڭ̤�`�ͬ��Ϊ��Q�i��Ʀr
    // �A�ӲĤG�ӰѼƴN�O���w�n�s�񪺦�m�A�]�N�O�O�����m��address�A�ڭ̥i�H�z�L & �o�ӲŸ��A�����W�٬�"���}�B��l"�A�u�n�� &��b�ܼƫe���A�N�i���o��O����Ŷ���address

    // �P�Ĥ@�ӼƦr���@�k�A�ڭ̥i�H�ШϥΪ̿�J�ĤG�ӼƦr
    printf("Please enter the second integer : ");
    scanf_s("%d", &number2);

    sum = number1 + number2; // + ���N�O�ڭ̤@�몺�[�k�A�n�`�N���O = �A�bC�y�����A= �N�����Oasssign�A�O��Ȫ��N��C�۵����g�k�d�줧�����P�_�����`�A��

    // �̫�ڭ̭n�⵲�G�^�ǵ��ϥΪ�
    printf("Sum is %d.\n", sum); // %d �]�i�Φbprintf�A���|�����Q��X�bcmd���A�|�γr���᭱���ܼƱa�J��~��X

    // �h�ӼƦr�ɥi�H��C����J���F�賣�����[�`�^sum�N�n
    // �D�n�Ҷq ���T�ʡB���@�ʡB�Ĳv�B�X�i��

    /* �Ʀr�ާ@���� ���� */

    /* ��ƫ��O���� �}�l */
    /* 
    ��ƳB�z�D�n�|����Ӱ��D: �O�� �P �p��
    ���O�M�w�F�x�s�M�p��覡
    
    �x�s������:
    �q�����O����Ŷ��O�H �줸��(byte)�����
    �@�Ӧ줸��(byte)�Ѧh�Ӧ줸(bit)�Һc��
    �z�w�w�w�w�w�{  �z�w�w�w�w�s�w�w�w�w�s�w�w�w�w�s�w�w�w�w�s�w�w�w�w�s�w�w�w�w�s�w�w�w�w�s�w�w�w�w�{
    �x   byte   �x=�x   bit   �x   bit   �x   bit   �x   bit   �x   bit   �x   bit   �x   bit   �x   bit   �x(�C��bit �O 0��1)
    �|�w�w�w�w�w�}  �|�w�w�w�w�r�w�w�w�w�r�w�w�w�w�r�w�w�w�w�r�w�w�w�w�r�w�w�w�w�r�w�w�w�w�r�w�w�w�w�}(�����AI��)
    �U�ظ�Ƴ��i�H�ഫ���@��0�M1���ǦC����
    �o�N�O���ƻ����榡�ɮ�(��r�B�Ϥ��B�v����)���i�H�Q�s�b�w�ФW����]
    �W�� �j�p(�줸��)�A�̹�@�w�q�Ӧ����P  �Ҥl
    short int 2* 32
    int 4* 32
    long int 4* 32
    char 1 '3'
    float 4* 3.2
    double 8* 3.2
    void ?
    (�����������n�z��)
    �䤤�t���b��N�[�����P�B��z���P�B�Ƚd�򤣦P�B��T�פ��P�Ʀܦ��L���t��
    �i��sizeof �d�ݽT����Ƥj�p
    */
    printf("long int:  %d \n", sizeof(long int));
    
    /* ��ƫ��O���� ���� */

    /* �ܼƩR�W���� �}�l */

    /*
    �����ܼƦb�ϥΫe�A�Ҷ��ŧi�Ωw�q
    �bC�y�����ŧi�ܤֻݭn���w��ƫ��O�B�ܼƦW�ٳo��ظ�T�A�åH��������
    �g�k�p�U:
    ��ƫ��O �ܼƦW��;
    int num;
    ���� ���w�q�欰
    �ŧi�P�ɤ]�i�������w��l�ȡA�٬���l��
    �g�k�p�U:
    ��ƫ��O �ܼƦW�� = ��l��;
    int num  = 0;
    �]0�O�ݭn�B�~�B�⪺�A�Y�S���S���ݨD�i�H���Ϊ�l��
    �ܼƦW�٪��R�W�O�����
    1.����H�Ʀr�}�Y
    2.�j�p�g�N�����P�R�W�A�Ҧpnum�MNum�O��Ӥ��P���ܼ�
    3.�u��H�^��B�Ʀr�B���u�R�W�A�����\��l�r��
    4.���i�ϥΫO�d�r�A�O�d�r���N��O�o�y���Ψөw�q�S���γ~���W�٩ε{�����\�h�w�g�g�n���`��function�A���F���P�L�̽Ĭ�A���i�ϥίS�w�W�١A�pint��printf
    �ԲӤ��наѦҳo��: https://pclevinblog.pixnet.net/blog/post/314560420-c-%E8%AA%9E%E8%A8%80%E5%8F%8A%E9%97%9C%E9%8D%B5%E5%AD%97-reserved-keywords

    */
    /* �ܼƩR�W���� ���� */


    return 0;// �� function ���浲���ɡA�N 0(�N�����槹��) �^�ǵ��@�~�t�ΡC �����s������compiler�|�b�S�greturn�ɡA�۰ʸɤW return 0�A�ҥH�Y�L�S�����Υi�ٲ����g
} // �϶�����