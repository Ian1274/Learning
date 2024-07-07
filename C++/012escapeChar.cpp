#include<iostream>

using namespace std;

/*

\a	    警报	007
\b	    退格(BS) ，将当前位置移到前一列	008
\f	    换页(FF)，将当前位置移到下页开头	012
\n	    换行(LF) ，将当前位置移到下一行开头	010
\r	    回车(CR) ，将当前位置移到本行开头	013
\t	    水平制表(HT) （跳到下一个TAB位置）	009
\v	    垂直制表(VT)	011
\\	    代表一个反斜线字符""	092
’	    代表一个单引号（撇号）字符	039
"	    代表一个双引号字符	034
?	    代表一个问号	063
\0	    数字0	000
\ddd	8进制转义字符，d范围0~7	3位8进制
\xhh	16进制转义字符，h范围09，af，A~F	3位16进制

*/

// 现阶段我们常用的转义字符有：\n \\ \t

int main(){

    cout << "\\" << endl;
    cout << "\tHello World" << endl;
    cout << "\n" << endl;

    return 0;
}
