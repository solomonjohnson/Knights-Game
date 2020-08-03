#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void grid()
{
	char g[4][4]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N'};
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<g[i][j]<<"\t";
		}
		cout<<endl;
	}

}
void start()
{
	cout<<"KNIGHTS"<<endl;
	cout<<endl;
	cout<<"Created by Solomon Johnson"<<endl;
	cout<<"Press"<<endl;
	cout<<"1 - New Game"<<endl;
	cout<<"2 - How to Play"<<endl;
	cout<<"3 - Exit"<<endl;
}

void comp(char y0, char y1)
{
	if(y0=='A' && (y1=='G' || y1=='J'))
	{
		cout<<"PROCEED"<<endl;
	}
	else if(y0=='B' && (y1=='H' || y1=='I' || y1=='K'))
	{
		cout<<"PROCEED"<<endl;
	}
	else if(y0=='C' && (y1=='E' || y1=='J' || y1=='L'))
	{
		cout<<"PROCEED"<<endl;
	}
	else if(y0=='D' && (y1=='F' || y1=='K'))
	{
		cout<<"PROCEED"<<endl;
	}
	else if(y0=='E' && (y1=='C' || y1=='K' || y1=='M'))
	{
		cout<<"PROCEED"<<endl;
	}
	else if(y0=='F' && (y1=='D' || y1=='L' || y1=='N'))
	{
		cout<<"PROCEED"<<endl;
	}
	else if(y0=='G' && (y1=='A' || y1=='I' || y1=='M'))
	{
		cout<<"PROCEED"<<endl;
	}
	else if(y0=='H' && (y1=='B' || y1=='J' || y1=='N'))
	{
		cout<<"PROCEED"<<endl;
	}
	else if(y0=='I' && (y1=='B' || y1=='G' || y1=='N'))
	{
		cout<<"PROCEED"<<endl;
	}
	else if(y0=='J' && (y1=='A' || y1=='C' || y1=='H'))
	{
		cout<<"PROCEED"<<endl;
	}
	else if(y0=='K' && (y1=='B' || y1=='D' || y1=='E'))
	{
		cout<<"PROCEED"<<endl;
	}
	else if(y0=='L' && (y1=='C' || y1=='F' || y1=='M'))
	{
		cout<<"PROCEED"<<endl;
	}
	else if(y0=='M' && (y1=='E' || y1=='G' || y1=='L'))
	{
		cout<<"PROCEED"<<endl;
	}
	else if(y0=='N' && (y1=='F' || y1=='H' || y1=='I'))
	{
		cout<<"PROCEED"<<endl;
	}
	else
	{
		cout<<"NOT POSSIBLE! ENTER ANY POSSIBLE MOVE"<<endl;
	}
}

void best(char a)
{
	char p1,p2,p3;
	if(a=='A')
	{
		p1='G';
		p2='J';
		p3=' ';
	}
	else if(a=='B')
	{
		p1='H';
		p2='I';
		p3='K';
	}
	else if(a=='C')
	{
		p1='H';
		p2='J';
		p3='L';
	}
	else if(a=='D')
	{
		p1='F';
		p2='K';
		p3=' ';
	}
	else if(a=='E')
	{
		p1='C';
		p2='K';
		p3='M';
	}
	else if(a=='F')
	{
		p1='D';
		p2='L';
		p3='N';
	}
		else if(a=='G')
	{
		p1='A';
		p2='I';
		p3='M';
	}
		else if(a=='H')
	{
		p1='B';
		p2='J';
		p3='N';
	}
		else if(a=='I')
	{
		p1='B';
		p2='G';
		p3='N';
	}
		else if(a=='J')
	{
		p1='A';
		p2='C';
		p3='H';
	}
		else if(a=='K')
	{
		p1='B';
		p2='D';
		p3='E';
	}
		else if(a=='L')
	{
		p1='C';
		p2='F';
		p3='M';
	}
		else if(a=='M')
	{
		p1='E';
		p2='G';
		p3='L';
	}
		else if(a=='N')
	{
		p1='F';
		p2='H';
		p3='I';
	}
		if(a==p1)
		{
			cout<<p1;
		}
		else
		{
			int n=0;
			while(n==14)
			{
			char a1=p1;
			cout<<p1;
			n++;
		best(a1);
			}
		}
}


		
void newgrid(char a11,char b11,char c11,char d11,char e11,char f11,char g11,char h11,char i11,char j11,char k11,char l11,char m11,char n11)
{
	cout<<"_________________________________"<<endl;
	cout<<"|   "<<a11<<"\t|";
	cout<<"   "<<b11<<"\t|";
	cout<<"   "<<c11<<"\t|";
	cout<<"   "<<d11<<"\t|";
	cout<<endl;
	cout<<"_________________________________"<<endl;
	cout<<"|   "<<e11<<"\t|";
	cout<<"   "<<f11<<"\t|";
	cout<<"   "<<g11<<"\t|";
	cout<<"   "<<h11<<"\t|";
	cout<<endl;
	cout<<"_________________________________"<<endl;
	cout<<"|   "<<i11<<"\t|";
	cout<<"   "<<j11<<"\t|";
	cout<<"   "<<k11<<"\t|";
	cout<<"   "<<l11<<"\t|";
	cout<<endl;
	cout<<"_________________________________"<<endl;
	cout<<"\t|";
	cout<<"   "<<m11<<"\t|";
	cout<<"   "<<n11<<"\t|";
	cout<<endl<<"        _________________";
	cout<<endl;
}
void moves(char a11,char b11,char c11,char d11,char e11,char f11,char g11,char h11,char i11,char j11,char k11,char l11,char m11,char n11,char letter1)
{
	switch(letter1)
	{
	case 'A':
		if(g11==' ' && j11==' ')
			cout<<"YOU LOSE";
		else if(g11==' ')
			cout<<"Possible moves : J";
		else if(j11==' ')
			cout<<"Possible moves : G";
		else
		cout<<"Possible moves : G , J";
		break;
	case 'B':
		if(h11==' ' && i11==' ' && k11==' ')
			cout<<"YOU LOSE";
		else if(i11==' ' && k11==' ')
			cout<<"Possible moves : H";
		else if(h11==' ' && k11==' ')
			cout<<"Possible moves : I";
		else if(h11==' ' && i11==' ')
			cout<<"Possible moves : K";
		else if(h11==' ')
			cout<<"Possible moves : I ,K ";
		else if(i11==' ')
			cout<<"Possible moves : H , K";
		else if(k11==' ')
			cout<<"Possible moves : H , I";
		else
		cout<<"Possible moves : H , I , K";
		break;	
	case 'C':
		if(e11==' ' && j11==' ' && l11==' ')
			cout<<"YOU LOSE";
		else if(j11==' ' && l11==' ')
			cout<<"Possible moves : E";
		else if(e11==' ' && l11==' ')
			cout<<"Possible moves : J";
		else if(e11==' ' && j11==' ')
			cout<<"Possible moves : L";
		else if(e11==' ')
			cout<<"Possible moves : J , L ";
		else if(j11==' ')
			cout<<"Possible moves : E , L";
		else if(l11==' ')
			cout<<"Possible moves : E , J";
		else
		cout<<"Possible moves : E , J , L ";
		break;
	case 'D':
		if(f11==' ' && k11==' ')
			cout<<"YOU LOSE";
		else if(f11==' ')
			cout<<"Possible moves : K ";
		else if(k11==' ')
			cout<<"Possible moves : F ";
		else
		cout<<"Possible moves : F , K ";
		break;
	case 'E':
		if(c11==' ' && k11==' ' && m11==' ')
			cout<<"YOU LOSE";
		else if(k11==' ' && m11==' ')
			cout<<"Possible moves : C";
		else if(c11==' ' && m11==' ')
			cout<<"Possible moves : K";
		else if(c11==' ' && k11==' ')
			cout<<"Possible moves : M";
		else if(c11==' ')
			cout<<"Possible moves : K , M ";
		else if(k11==' ')
			cout<<"Possible moves : C , M";
		else if(m11==' ')
			cout<<"Possible moves : C , K";
		else
		cout<<"Possible moves : C , K , M";
		break;
	case 'F':
		if(d11==' ' && l11==' ' && n11==' ')
			cout<<"YOU LOSE";
		else if(l11==' ' && n11==' ')
			cout<<"Possible moves : D";
		else if(d11==' ' && n11==' ')
			cout<<"Possible moves : L";
		else if(d11==' ' && l11==' ')
			cout<<"Possible moves : N";
		else if(d11==' ')
			cout<<"Possible moves : L , N ";
		else if(l11==' ')
			cout<<"Possible moves : D , N";
		else if(n11==' ')
			cout<<"Possible moves : D , L";
		else
		cout<<"Possible moves : D , L , N ";
		break;
	case 'G':
		if(a11==' ' && i11==' ' && m11==' ')
			cout<<"YOU LOSE";
		else if(i11==' ' && m11==' ')
			cout<<"Possible moves : A";
		else if(a11==' ' && m11==' ')
			cout<<"Possible moves : I";
		else if(a11==' ' && i11==' ')
			cout<<"Possible moves : M";
		else if(a11==' ')
			cout<<"Possible moves : I , M ";
		else if(i11==' ')
			cout<<"Possible moves : A , M";
		else if(m11==' ')
			cout<<"Possible moves : A , I";
		else
		cout<<"Possible moves : A , I , M ";
		break;
	case 'H':
		if(b11==' ' && j11==' ' && n11==' ')
			cout<<"YOU LOSE";
		else if(j11==' ' && n11==' ')
			cout<<"Possible moves : B";
		else if(b11==' ' && n11==' ')
			cout<<"Possible moves : J";
		else if(b11==' ' && j11==' ')
			cout<<"Possible moves : N";
		else if(b11==' ')
			cout<<"Possible moves : J , N ";
		else if(j11==' ')
			cout<<"Possible moves : B , N";
		else if(n11==' ')
			cout<<"Possible moves : B , J";
		else
		cout<<"Possible moves : B , J , N ";
		break;
	case 'I':
		if(b11==' ' && g11==' ' && n11==' ')
			cout<<"YOU LOSE";
		else if(g11==' ' && n11==' ')
			cout<<"Possible moves : B";
		else if(b11==' ' && n11==' ')
			cout<<"Possible moves : G";
		else if(b11==' ' && g11==' ')
			cout<<"Possible moves : N";
		else if(b11==' ')
			cout<<"Possible moves : G , N ";
		else if(g11==' ')
			cout<<"Possible moves : B , N";
		else if(n11==' ')
			cout<<"Possible moves : B , G";
		else
		cout<<"Possible moves : B , G , N";
		break;
	case 'J':
		if(a11==' ' && c11==' ' && h11==' ')
			cout<<"YOU LOSE";
		else if(c11==' ' && h11==' ')
			cout<<"Possible moves : A";
		else if(a11==' ' && h11==' ')
			cout<<"Possible moves : C";
		else if(a11==' ' && c11==' ')
			cout<<"Possible moves : H";
		else if(a11==' ')
			cout<<"Possible moves : C , H ";
		else if(c11==' ')
			cout<<"Possible moves : A , H";
		else if(h11==' ')
			cout<<"Possible moves : A , C";
		else
		cout<<"Possible moves : A , C , H";
		break;
	case 'K':
		if(b11==' ' && d11==' ' && e11==' ')
			cout<<"YOU LOSE";
		else if(d11==' ' && e11==' ')
			cout<<"Possible moves : B";
		else if(b11==' ' && e11==' ')
			cout<<"Possible moves : D";
		else if(b11==' ' && d11==' ')
			cout<<"Possible moves : E";
		else if(b11==' ')
			cout<<"Possible moves : D , E ";
		else if(d11==' ')
			cout<<"Possible moves : B , E";
		else if(e11==' ')
			cout<<"Possible moves : B , D";
		else
		cout<<"Possible moves : B , D , E ";
		break;
	case 'L':
		if(c11==' ' && f11==' ' && m11==' ')
			cout<<"YOU LOSE";
		else if(f11==' ' && m11==' ')
			cout<<"Possible moves : C";
		else if(c11==' ' && m11==' ')
			cout<<"Possible moves : F";
		else if(c11==' ' && f11==' ')
			cout<<"Possible moves : M";
		else if(c11==' ')
			cout<<"Possible moves : F , M ";
		else if(f11==' ')
			cout<<"Possible moves : C , M";
		else if(m11==' ')
			cout<<"Possible moves : C , F";
		else
		cout<<"Possible moves : C , F , M ";
		break;
	case 'M':
		if(e11==' ' && g11==' ' && l11==' ')
			cout<<"YOU LOSE";
		else if(g11==' ' && l11==' ')
			cout<<"Possible moves : E";
		else if(e11==' ' && l11==' ')
			cout<<"Possible moves : G";
		else if(e11==' ' && g11==' ')
			cout<<"Possible moves : L";
		else if(e11==' ')
			cout<<"Possible moves : G , L ";
		else if(g11==' ')
			cout<<"Possible moves : E , L";
		else if(l11==' ')
			cout<<"Possible moves : E , G";
		else
		cout<<"Possible moves : E , G , L";
		break;
	case 'N':
		if(f11==' ' && h11==' ' && i11==' ')
			cout<<"YOU LOSE";
		else if(h11==' ' && i11==' ')
			cout<<"Possible moves : F";
		else if(f11==' ' && i11==' ')
			cout<<"Possible moves : H";
		else if(f11==' ' && h11==' ')
			cout<<"Possible moves : I";
		else if(f11==' ')
			cout<<"Possible moves : H , I ";
		else if(h11==' ')
			cout<<"Possible moves : F , I";
		else if(i11==' ')
			cout<<"Possible moves : F , H";
		else
		cout<<"Possible moves : F , H , I";
		break;
	}
		cout<<endl;
}
void cheak(char m)
{
	while(m==' ')
		{
			cout<<"NOT POSSIBLE";
			break;
		}
		
		
}

char update(char letter)
{
	if(letter=='A')
	{
	char a=' ';
	return 0 ;
	}
	else if(letter=='B')
	{
	char b=' ';
	return b;
	}
	else if(letter=='C')
	{
	char c=' ';
	return c;
	}
	else if(letter=='D')
	{
	char d=' ';
	return d;
	}
	else if(letter=='E')
	{
	char e=' ';
	return e;
	}
	else if(letter=='F')
	{
	char f=' ';
	return f;
	}
	else if(letter=='G')
	{
	char g=' ';
	return g;
	}
	else if(letter=='H')
	{
	char h=' ';
	return h;
	}
	else if(letter=='I')
	{
	char i=' ';
	return i;
	}
	else if(letter=='J')
	{
	char j=' ';
	return j;
	}
	else if(letter=='K')
	{
	char k=' ';
	return k;
	}
	else if(letter=='L')
	{
	char l=' ';
	return l;
	}
	else if(letter=='M')
	{
	char m=' ';
	return m;
	}
	else
	{
	char n=' ';
	return n;
	}
}
	
int main()
{
begin:char a='A',b='B',c='C',d='D',e='E',f='F',g='G',h='H',i='I',j='J',k='K',l='L',m='M',n='N',t,t0,ent;
	start();
	cin>>ent;
	switch(ent)
	{
	case '1':
		goto a0;
		break;
	case '2':
		grid();
		break;
	case '3':
		goto exit;
		break;
	}
	a0:system("cls");
	newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
	cin>>t;
	system("cls");
	if(t=='A')
	{
		a=' ';
	}
	else if(t=='B')
	{
		b=' ';
	}
	else if(t=='C')
	{
		c=' ';
	}
	else if(t=='D')
	{
		d=' ';
	}
	else if(t=='E')
	{
		e=' ';
	}
	else if(t=='F')
	{
		f=' ';
	}
	else if(t=='G')
	{
		g=' ';
	}
	else if(t=='H')
	{
		h=' ';
	}
	else if(t=='I')
	{
		i=' ';
	}
	else if(t=='J')
	{
		j=' ';
	}
	else if(t=='K')
	{
		k=' ';
	}
	else if(t=='L')
	{
		l=' ';
	}
	else if(t=='M')
	{
		m=' ';
	}
	else if(t=='N')
	{
		n=' ';
	}
	else
	{
		cout<<"NOT POSSIBLE"<<endl;
		goto a0;
	}

	moves(a,b,c,d,e,f,g,h,i,j,k,l,m,n,t);
	a1:newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
	t0=t;
	b1:cin>>t;
	system("cls");
	comp(t0,t);
	if((t0=='A' && (t=='G' || t=='J')) || (t0=='B' && (t=='H' || t=='I' || t=='K')) || (t0=='C' && (t=='E' || t=='J' || t=='L')) || (t0=='D' && (t=='F' || t=='K')) || (t0=='E' && (t=='C' || t=='K' || t=='M')) || (t0=='F' && (t=='D' || t=='L' || t=='N')) || (t0=='G' && (t=='A' || t=='I' || t=='M')) || (t0=='H' && (t=='B' || t=='J' || t=='N')) || (t0=='I' && (t=='B' || t=='G' || t=='N')) || (t0=='J' && (t=='A' || t=='C' || t=='H')) || (t0=='K' && (t=='B' || t=='D' || t=='E')) || (t0=='L' && (t=='C' || t=='F' || t=='M')) || (t0=='M' && (t=='E' || t=='G' || t=='L')) || (t0=='N' && (t=='F' || t=='H' || t=='I')))
		cout<<endl;
	else
	{
		newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
		goto b1;
	}

	if(t=='A')
	{
	while(a==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a1;
		}
		a=' ';
	}
	else if(t=='B')
	{
	while(b==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a1;
		}
		b=' ';
	}
	else if(t=='C')
	{
	while(c==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a1;
		}
		c=' ';
	}
	else if(t=='D')
	{
	while(d==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a1;
		}
		d=' ';
	}
	else if(t=='E')
	{
	while(e==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a1;
		}
		e=' ';
	}
	else if(t=='F')
	{
	while(f==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a1;
		}
		f=' ';
	}
	else if(t=='G')
	{
	while(g==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a1;
		}
		g=' ';
	}
	else if(t=='H')
	{
	while(h==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a1;
		}
		h=' ';
	}
	else if(t=='I')
	{
	while(i==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a1;
		}
		i=' ';
	}
	else if(t=='J')
	{
	while(j==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a1;
		}
		j=' ';
	}
	else if(t=='K')
	{
	while(k==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a1;
		}
		k=' ';
	}
	else if(t=='L')
	{
	while(l==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a1;
		}
		l=' ';
	}
	else if(t=='M')
	{
	while(m==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a1;
		}
		m=' ';
	}
	else if(t=='N')
	{
	while(n==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a1;
		}
		n=' ';
	}
	else
	{
		cout<<"NOT POSSIBLE"<<endl;
	}

	moves(a,b,c,d,e,f,g,h,i,j,k,l,m,n,t);
	a2:newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
	t0=t;
	b2:cin>>t;
	system("cls");
	comp(t0,t);
	if((t0=='A' && (t=='G' || t=='J')) || (t0=='B' && (t=='H' || t=='I' || t=='K')) || (t0=='C' && (t=='E' || t=='J' || t=='L')) || (t0=='D' && (t=='F' || t=='K')) || (t0=='E' && (t=='C' || t=='K' || t=='M')) || (t0=='F' && (t=='D' || t=='L' || t=='N')) || (t0=='G' && (t=='A' || t=='I' || t=='M')) || (t0=='H' && (t=='B' || t=='J' || t=='N')) || (t0=='I' && (t=='B' || t=='G' || t=='N')) || (t0=='J' && (t=='A' || t=='C' || t=='H')) || (t0=='K' && (t=='B' || t=='D' || t=='E')) || (t0=='L' && (t=='C' || t=='F' || t=='M')) || (t0=='M' && (t=='E' || t=='G' || t=='L')) || (t0=='N' && (t=='F' || t=='H' || t=='I')))
		cout<<endl;
	else
		{
		newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
		goto b2;
	}

	if(t=='A')
	{
	while(a==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a2;
		}
		a=' ';
	}
	else if(t=='B')
	{
	while(b==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a2;
		}
		b=' ';
	}
	else if(t=='C')
	{
	while(c==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a2;
		}
		c=' ';
	}
	else if(t=='D')
	{
	while(d==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a2;
		}
		d=' ';
	}
	else if(t=='E')
	{
	while(e==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a2;
		}
		e=' ';
	}
	else if(t=='F')
	{
	while(f==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a2;
		}
		f=' ';
	}
	else if(t=='G')
	{
	while(g==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a2;
		}
		g=' ';
	}
	else if(t=='H')
	{
	while(h==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a2;
		}
		h=' ';
	}
	else if(t=='I')
	{
	while(i==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a2;
		}
		i=' ';
	}
	else if(t=='J')
	{
	while(j==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a2;
		}
		j=' ';
	}
	else if(t=='K')
	{
	while(k==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a2;
		}
		k=' ';
	}
	else if(t=='L')
	{
	while(l==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a2;
		}
		l=' ';
	}
	else if(t=='M')
	{
	while(m==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a2;
		}
		m=' ';
	}
	else if(t=='N')
	{
	while(n==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a2;
		}
		n=' ';
	}
	else
	{
		cout<<"NOT POSSIBLE"<<endl;
	}

	moves(a,b,c,d,e,f,g,h,i,j,k,l,m,n,t);
	a3:newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
	t0=t;
	b3:cin>>t;
	system("cls");
	comp(t0,t);
	if((t0=='A' && (t=='G' || t=='J')) || (t0=='B' && (t=='H' || t=='I' || t=='K')) || (t0=='C' && (t=='E' || t=='J' || t=='L')) || (t0=='D' && (t=='F' || t=='K')) || (t0=='E' && (t=='C' || t=='K' || t=='M')) || (t0=='F' && (t=='D' || t=='L' || t=='N')) || (t0=='G' && (t=='A' || t=='I' || t=='M')) || (t0=='H' && (t=='B' || t=='J' || t=='N')) || (t0=='I' && (t=='B' || t=='G' || t=='N')) || (t0=='J' && (t=='A' || t=='C' || t=='H')) || (t0=='K' && (t=='B' || t=='D' || t=='E')) || (t0=='L' && (t=='C' || t=='F' || t=='M')) || (t0=='M' && (t=='E' || t=='G' || t=='L')) || (t0=='N' && (t=='F' || t=='H' || t=='I')))
		cout<<endl;
	else
		{
		newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
		goto b3;
	}

	if(t=='A')
	{
	while(a==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a3;
		}
		a=' ';
	}
	else if(t=='B')
	{
	while(b==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a3;
		}
		b=' ';
	}
	else if(t=='C')
	{
	while(c==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a3;
		}
		c=' ';
	}
	else if(t=='D')
	{
	while(d==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a3;
		}
		d=' ';
	}
	else if(t=='E')
	{
	while(e==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a3;
		}
		e=' ';
	}
	else if(t=='F')
	{
	while(f==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a3;
		}
		f=' ';
	}
	else if(t=='G')
	{
	while(g==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a3;
		}
		g=' ';
	}
	else if(t=='H')
	{
	while(h==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a3;
		}
		h=' ';
	}
	else if(t=='I')
	{
	while(i==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a3;
		}
		i=' ';
	}
	else if(t=='J')
	{
	while(j==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a3;
		}
		j=' ';
	}
	else if(t=='K')
	{
	while(k==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a3;
		}
		k=' ';
	}
	else if(t=='L')
	{
	while(l==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a3;
		}
		l=' ';
	}
	else if(t=='M')
	{
	while(m==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a3;
		}
		m=' ';
	}
	else if(t=='N')
	{
	while(n==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a3;
		}
		n=' ';
	}
	else
	{
		cout<<"NOT POSSIBLE"<<endl;
	}

	moves(a,b,c,d,e,f,g,h,i,j,k,l,m,n,t);
	a4:newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
	t0=t;
	b4:cin>>t;
	system("cls");
	comp(t0,t);
	if((t0=='A' && (t=='G' || t=='J')) || (t0=='B' && (t=='H' || t=='I' || t=='K')) || (t0=='C' && (t=='E' || t=='J' || t=='L')) || (t0=='D' && (t=='F' || t=='K')) || (t0=='E' && (t=='C' || t=='K' || t=='M')) || (t0=='F' && (t=='D' || t=='L' || t=='N')) || (t0=='G' && (t=='A' || t=='I' || t=='M')) || (t0=='H' && (t=='B' || t=='J' || t=='N')) || (t0=='I' && (t=='B' || t=='G' || t=='N')) || (t0=='J' && (t=='A' || t=='C' || t=='H')) || (t0=='K' && (t=='B' || t=='D' || t=='E')) || (t0=='L' && (t=='C' || t=='F' || t=='M')) || (t0=='M' && (t=='E' || t=='G' || t=='L')) || (t0=='N' && (t=='F' || t=='H' || t=='I')))
		cout<<endl;
	else
		{
		newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
		goto b4;
	}

	if(t=='A')
	{
	while(a==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a4;
		}
		a=' ';
	}
	else if(t=='B')
	{
	while(b==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a4;
		}
		b=' ';
	}
	else if(t=='C')
	{
	while(c==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a4;
		}
		c=' ';
	}
	else if(t=='D')
	{
	while(d==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a4;
		}
		d=' ';
	}
	else if(t=='E')
	{
	while(e==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a4;
		}
		e=' ';
	}
	else if(t=='F')
	{
	while(f==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a4;
		}
		f=' ';
	}
	else if(t=='G')
	{
	while(g==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a4;
		}
		g=' ';
	}
	else if(t=='H')
	{
	while(h==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a4;
		}
		h=' ';
	}
	else if(t=='I')
	{
	while(i==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a4;
		}
		i=' ';
	}
	else if(t=='J')
	{
	while(j==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a4;
		}
		j=' ';
	}
	else if(t=='K')
	{
	while(k==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a4;
		}
		k=' ';
	}
	else if(t=='L')
	{
	while(l==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a4;
		}
		l=' ';
	}
	else if(t=='M')
	{
	while(m==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a4;
		}
		m=' ';
	}
	else if(t=='N')
	{
	while(n==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a4;
		}
		n=' ';
	}
	else
	{
		cout<<"NOT POSSIBLE"<<endl;
	}

	moves(a,b,c,d,e,f,g,h,i,j,k,l,m,n,t);
	a5:newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
	t0=t;
	b5:cin>>t;
	system("cls");
	comp(t0,t);
	if((t0=='A' && (t=='G' || t=='J')) || (t0=='B' && (t=='H' || t=='I' || t=='K')) || (t0=='C' && (t=='E' || t=='J' || t=='L')) || (t0=='D' && (t=='F' || t=='K')) || (t0=='E' && (t=='C' || t=='K' || t=='M')) || (t0=='F' && (t=='D' || t=='L' || t=='N')) || (t0=='G' && (t=='A' || t=='I' || t=='M')) || (t0=='H' && (t=='B' || t=='J' || t=='N')) || (t0=='I' && (t=='B' || t=='G' || t=='N')) || (t0=='J' && (t=='A' || t=='C' || t=='H')) || (t0=='K' && (t=='B' || t=='D' || t=='E')) || (t0=='L' && (t=='C' || t=='F' || t=='M')) || (t0=='M' && (t=='E' || t=='G' || t=='L')) || (t0=='N' && (t=='F' || t=='H' || t=='I')))
		cout<<endl;
	else
		{
		newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
		goto b5;
	}

	if(t=='A')
	{
	while(a==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a5;
		}
		a=' ';
	}
	else if(t=='B')
	{
	while(b==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a5;
		}
		b=' ';
	}
	else if(t=='C')
	{
	while(c==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a5;
		}
		c=' ';
	}
	else if(t=='D')
	{
	while(d==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a5;
		}
		d=' ';
	}
	else if(t=='E')
	{
	while(e==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a5;
		}
		e=' ';
	}
	else if(t=='F')
	{
	while(f==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a5;
		}
		f=' ';
	}
	else if(t=='G')
	{
	while(g==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a5;
		}
		g=' ';
	}
	else if(t=='H')
	{
	while(h==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a5;
		}
		h=' ';
	}
	else if(t=='I')
	{
	while(i==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a5;
		}
		i=' ';
	}
	else if(t=='J')
	{
	while(j==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a5;
		}
		j=' ';
	}
	else if(t=='K')
	{
	while(k==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a5;
		}
		k=' ';
	}
	else if(t=='L')
	{
	while(l==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a5;
		}
		l=' ';
	}
	else if(t=='M')
	{
	while(m==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a5;
		}
		m=' ';
	}
	else if(t=='N')
	{
	while(n==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a5;
		}
		n=' ';
	}
	else
	{
		cout<<"NOT POSSIBLE"<<endl;
	}

	moves(a,b,c,d,e,f,g,h,i,j,k,l,m,n,t);
	a6:newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
	t0=t;
	b6:cin>>t;
	system("cls");
	comp(t0,t);
	if((t0=='A' && (t=='G' || t=='J')) || (t0=='B' && (t=='H' || t=='I' || t=='K')) || (t0=='C' && (t=='E' || t=='J' || t=='L')) || (t0=='D' && (t=='F' || t=='K')) || (t0=='E' && (t=='C' || t=='K' || t=='M')) || (t0=='F' && (t=='D' || t=='L' || t=='N')) || (t0=='G' && (t=='A' || t=='I' || t=='M')) || (t0=='H' && (t=='B' || t=='J' || t=='N')) || (t0=='I' && (t=='B' || t=='G' || t=='N')) || (t0=='J' && (t=='A' || t=='C' || t=='H')) || (t0=='K' && (t=='B' || t=='D' || t=='E')) || (t0=='L' && (t=='C' || t=='F' || t=='M')) || (t0=='M' && (t=='E' || t=='G' || t=='L')) || (t0=='N' && (t=='F' || t=='H' || t=='I')))
		cout<<endl;
	else
		{
		newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
		goto b6;
		}

	if(t=='A')
	{
	while(a==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a6;
		}
		a=' ';
	}
	else if(t=='B')
	{
	while(b==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a6;
		}
		b=' ';
	}
	else if(t=='C')
	{
	while(c==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a6;
		}
		c=' ';
	}
	else if(t=='D')
	{
	while(d==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a6;
		}
		d=' ';
	}
	else if(t=='E')
	{
	while(e==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a6;
		}
		e=' ';
	}
	else if(t=='F')
	{
	while(f==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a6;
		}
		f=' ';
	}
	else if(t=='G')
	{
	while(g==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a6;
		}
		g=' ';
	}
	else if(t=='H')
	{
	while(h==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a6;
		}
		h=' ';
	}
	else if(t=='I')
	{
	while(i==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a6;
		}
		i=' ';
	}
	else if(t=='J')
	{
	while(j==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a6;
		}
		j=' ';
	}
	else if(t=='K')
	{
	while(k==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a6;
		}
		k=' ';
	}
	else if(t=='L')
	{
	while(l==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a6;
		}
		l=' ';
	}
	else if(t=='M')
	{
	while(m==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a6;
		}
		m=' ';
	}
	else if(t=='N')
	{
	while(n==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a6;
		}
		n=' ';
	}
	else
	{
		cout<<"NOT POSSIBLE"<<endl;
	}

	moves(a,b,c,d,e,f,g,h,i,j,k,l,m,n,t);
	a7:newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
	t0=t;
	b7:cin>>t;
	system("cls");
	comp(t0,t);
	if((t0=='A' && (t=='G' || t=='J')) || (t0=='B' && (t=='H' || t=='I' || t=='K')) || (t0=='C' && (t=='E' || t=='J' || t=='L')) || (t0=='D' && (t=='F' || t=='K')) || (t0=='E' && (t=='C' || t=='K' || t=='M')) || (t0=='F' && (t=='D' || t=='L' || t=='N')) || (t0=='G' && (t=='A' || t=='I' || t=='M')) || (t0=='H' && (t=='B' || t=='J' || t=='N')) || (t0=='I' && (t=='B' || t=='G' || t=='N')) || (t0=='J' && (t=='A' || t=='C' || t=='H')) || (t0=='K' && (t=='B' || t=='D' || t=='E')) || (t0=='L' && (t=='C' || t=='F' || t=='M')) || (t0=='M' && (t=='E' || t=='G' || t=='L')) || (t0=='N' && (t=='F' || t=='H' || t=='I')))
		cout<<endl;
	else
		{
		newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
		goto b7;
	}

	if(t=='A')
	{
	while(a==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a7;
		}
		a=' ';
	}
	else if(t=='B')
	{
	while(b==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a7;
		}
		b=' ';
	}
	else if(t=='C')
	{
	while(c==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a7;
		}
		c=' ';
	}
	else if(t=='D')
	{
	while(d==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a7;
		}
		d=' ';
	}
	else if(t=='E')
	{
	while(e==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a7;
		}
		e=' ';
	}
	else if(t=='F')
	{
	while(f==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a7;
		}
		f=' ';
	}
	else if(t=='G')
	{
	while(g==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a7;
		}
		g=' ';
	}
	else if(t=='H')
	{
	while(h==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a7;
		}
		h=' ';
	}
	else if(t=='I')
	{
	while(i==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a7;
		}
		i=' ';
	}
	else if(t=='J')
	{
	while(j==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a7;
		}
		j=' ';
	}
	else if(t=='K')
	{
	while(k==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a7;
		}
		k=' ';
	}
	else if(t=='L')
	{
	while(l==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a7;
		}
		l=' ';
	}
	else if(t=='M')
	{
	while(m==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a7;
		}
		m=' ';
	}
	else if(t=='N')
	{
	while(n==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a7;
		}
		n=' ';
	}
	else
	{
		cout<<"NOT POSSIBLE"<<endl;
	}

	moves(a,b,c,d,e,f,g,h,i,j,k,l,m,n,t);
	a8:newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
	t0=t;
	b8:cin>>t;
	system("cls");
	comp(t0,t);
	if((t0=='A' && (t=='G' || t=='J')) || (t0=='B' && (t=='H' || t=='I' || t=='K')) || (t0=='C' && (t=='E' || t=='J' || t=='L')) || (t0=='D' && (t=='F' || t=='K')) || (t0=='E' && (t=='C' || t=='K' || t=='M')) || (t0=='F' && (t=='D' || t=='L' || t=='N')) || (t0=='G' && (t=='A' || t=='I' || t=='M')) || (t0=='H' && (t=='B' || t=='J' || t=='N')) || (t0=='I' && (t=='B' || t=='G' || t=='N')) || (t0=='J' && (t=='A' || t=='C' || t=='H')) || (t0=='K' && (t=='B' || t=='D' || t=='E')) || (t0=='L' && (t=='C' || t=='F' || t=='M')) || (t0=='M' && (t=='E' || t=='G' || t=='L')) || (t0=='N' && (t=='F' || t=='H' || t=='I')))
		cout<<endl;
	else
		{
		newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
		goto b8;
	}

	if(t=='A')
	{
	while(a==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a8;
		}
		a=' ';
	}
	else if(t=='B')
	{
	while(b==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a8;
		}
		b=' ';
	}
	else if(t=='C')
	{
	while(c==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a8;
		}
		c=' ';
	}
	else if(t=='D')
	{
	while(d==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a8;
		}
		d=' ';
	}
	else if(t=='E')
	{
	while(e==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a8;
		}
		e=' ';
	}
	else if(t=='F')
	{
	while(f==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a8;
		}
		f=' ';
	}
	else if(t=='G')
	{
	while(g==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a8;
		}
		g=' ';
	}
	else if(t=='H')
	{
	while(h==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a8;
		}
		h=' ';
	}
	else if(t=='I')
	{
	while(i==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a8;
		}
		i=' ';
	}
	else if(t=='J')
	{
	while(j==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a8;
		}
		j=' ';
	}
	else if(t=='K')
	{
	while(k==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a8;
		}
		k=' ';
	}
	else if(t=='L')
	{
	while(l==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a8;
		}
		l=' ';
	}
	else if(t=='M')
	{
	while(m==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a8;
		}
		m=' ';
	}
	else if(t=='N')
	{
	while(n==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a8;
		}
		n=' ';
	}
	else
	{
		cout<<"NOT POSSIBLE"<<endl;
	}

	moves(a,b,c,d,e,f,g,h,i,j,k,l,m,n,t);
	a9:newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
	t0=t;
	b9:cin>>t;
	system("cls");
	comp(t0,t);
	if((t0=='A' && (t=='G' || t=='J')) || (t0=='B' && (t=='H' || t=='I' || t=='K')) || (t0=='C' && (t=='E' || t=='J' || t=='L')) || (t0=='D' && (t=='F' || t=='K')) || (t0=='E' && (t=='C' || t=='K' || t=='M')) || (t0=='F' && (t=='D' || t=='L' || t=='N')) || (t0=='G' && (t=='A' || t=='I' || t=='M')) || (t0=='H' && (t=='B' || t=='J' || t=='N')) || (t0=='I' && (t=='B' || t=='G' || t=='N')) || (t0=='J' && (t=='A' || t=='C' || t=='H')) || (t0=='K' && (t=='B' || t=='D' || t=='E')) || (t0=='L' && (t=='C' || t=='F' || t=='M')) || (t0=='M' && (t=='E' || t=='G' || t=='L')) || (t0=='N' && (t=='F' || t=='H' || t=='I')))
		cout<<endl;
	else
		{
		newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
		goto b9;
	}

	if(t=='A')
	{
	while(a==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a9;
		}
		a=' ';
	}
	else if(t=='B')
	{
	while(b==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a9;
		}
		b=' ';
	}
	else if(t=='C')
	{
	while(c==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a9;
		}
		c=' ';
	}
	else if(t=='D')
	{
	while(d==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a9;
		}
		d=' ';
	}
	else if(t=='E')
	{
	while(e==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a9;
		}
		e=' ';
	}
	else if(t=='F')
	{
	while(f==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a9;
		}
		f=' ';
	}
	else if(t=='G')
	{
	while(g==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a9;
		}
		g=' ';
	}
	else if(t=='H')
	{
	while(h==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a9;
		}
		h=' ';
	}
	else if(t=='I')
	{
	while(i==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a9;
		}
		i=' ';
	}
	else if(t=='J')
	{
	while(j==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a9;
		}
		j=' ';
	}
	else if(t=='K')
	{
	while(k==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a9;
		}
		k=' ';
	}
	else if(t=='L')
	{
	while(l==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a9;
		}
		l=' ';
	}
	else if(t=='M')
	{
	while(m==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a9;
		}
		m=' ';
	}
	else if(t=='N')
	{
	while(n==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a9;
		}
		n=' ';
	}
	else
	{
		cout<<"NOT POSSIBLE"<<endl;
	}

	moves(a,b,c,d,e,f,g,h,i,j,k,l,m,n,t);
	a10:newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
	t0=t;
	b10:cin>>t;
	system("cls");
	comp(t0,t);
	if((t0=='A' && (t=='G' || t=='J')) || (t0=='B' && (t=='H' || t=='I' || t=='K')) || (t0=='C' && (t=='E' || t=='J' || t=='L')) || (t0=='D' && (t=='F' || t=='K')) || (t0=='E' && (t=='C' || t=='K' || t=='M')) || (t0=='F' && (t=='D' || t=='L' || t=='N')) || (t0=='G' && (t=='A' || t=='I' || t=='M')) || (t0=='H' && (t=='B' || t=='J' || t=='N')) || (t0=='I' && (t=='B' || t=='G' || t=='N')) || (t0=='J' && (t=='A' || t=='C' || t=='H')) || (t0=='K' && (t=='B' || t=='D' || t=='E')) || (t0=='L' && (t=='C' || t=='F' || t=='M')) || (t0=='M' && (t=='E' || t=='G' || t=='L')) || (t0=='N' && (t=='F' || t=='H' || t=='I')))
		cout<<endl;
	else
		{
		newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
		goto b10;
	}

	if(t=='A')
	{
	while(a==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a10;
		}
		a=' ';
	}
	else if(t=='B')
	{
	while(b==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a10;
		}
		b=' ';
	}
	else if(t=='C')
	{
	while(c==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a10;
		}
		c=' ';
	}
	else if(t=='D')
	{
	while(d==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a10;
		}
		d=' ';
	}
	else if(t=='E')
	{
	while(e==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a10;
		}
		e=' ';
	}
	else if(t=='F')
	{
	while(f==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a10;
		}
		f=' ';
	}
	else if(t=='G')
	{
	while(g==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a10;
		}
		g=' ';
	}
	else if(t=='H')
	{
	while(h==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a10;
		}
		h=' ';
	}
	else if(t=='I')
	{
	while(i==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a10;
		}
		i=' ';
	}
	else if(t=='J')
	{
	while(j==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a10;
		}
		j=' ';
	}
	else if(t=='K')
	{
	while(k==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a10;
		}
		k=' ';
	}
	else if(t=='L')
	{
	while(l==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a10;
		}
		l=' ';
	}
	else if(t=='M')
	{
	while(m==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a10;
		}
		m=' ';
	}
	else if(t=='N')
	{
	while(n==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a10;
		}
		n=' ';
	}
	else
	{
		cout<<"NOT POSSIBLE"<<endl;
	}

	moves(a,b,c,d,e,f,g,h,i,j,k,l,m,n,t);
	a11:newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
	t0=t;
	b11:cin>>t;
	system("cls");
	comp(t0,t);
	if((t0=='A' && (t=='G' || t=='J')) || (t0=='B' && (t=='H' || t=='I' || t=='K')) || (t0=='C' && (t=='E' || t=='J' || t=='L')) || (t0=='D' && (t=='F' || t=='K')) || (t0=='E' && (t=='C' || t=='K' || t=='M')) || (t0=='F' && (t=='D' || t=='L' || t=='N')) || (t0=='G' && (t=='A' || t=='I' || t=='M')) || (t0=='H' && (t=='B' || t=='J' || t=='N')) || (t0=='I' && (t=='B' || t=='G' || t=='N')) || (t0=='J' && (t=='A' || t=='C' || t=='H')) || (t0=='K' && (t=='B' || t=='D' || t=='E')) || (t0=='L' && (t=='C' || t=='F' || t=='M')) || (t0=='M' && (t=='E' || t=='G' || t=='L')) || (t0=='N' && (t=='F' || t=='H' || t=='I')))
		cout<<endl;
	else
		{
		newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
		goto b11;
	}

	if(t=='A')
	{
	while(a==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a11;
		}
		a=' ';
	}
	else if(t=='B')
	{
	while(b==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a11;
		}
		b=' ';
	}
	else if(t=='C')
	{
	while(b==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a11;
		}
		c=' ';
	}
	else if(t=='D')
	{
	while(d==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a11;
		}
		d=' ';
	}
	else if(t=='E')
	{
	while(e==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a11;
		}
		e=' ';
	}
	else if(t=='F')
	{
	while(f==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a11;
		}
		f=' ';
	}
	else if(t=='G')
	{
	while(g==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a11;
		}
		g=' ';
	}
	else if(t=='H')
	{
	while(h==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a11;
		}
		h=' ';
	}
	else if(t=='I')
	{
	while(i==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a11;
		}
		i=' ';
	}
	else if(t=='J')
	{
	while(j==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a11;
		}
		j=' ';
	}
	else if(t=='K')
	{
	while(k==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a11;
		}
		k=' ';
	}
	else if(t=='L')
	{
	while(l==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a11;
		}
		l=' ';
	}
	else if(t=='M')
	{
	while(m==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a11;
		}
		m=' ';
	}
	else if(t=='N')
	{
	while(n==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a11;
		}
		n=' ';
	}
	else
	{
		cout<<"NOT POSSIBLE"<<endl;
	}
	moves(a,b,c,d,e,f,g,h,i,j,k,l,m,n,t);
	a12:newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
	t0=t;
	b12:cin>>t;
	system("cls");
	comp(t0,t);
	if((t0=='A' && (t=='G' || t=='J')) || (t0=='B' && (t=='H' || t=='I' || t=='K')) || (t0=='C' && (t=='E' || t=='J' || t=='L')) || (t0=='D' && (t=='F' || t=='K')) || (t0=='E' && (t=='C' || t=='K' || t=='M')) || (t0=='F' && (t=='D' || t=='L' || t=='N')) || (t0=='G' && (t=='A' || t=='I' || t=='M')) || (t0=='H' && (t=='B' || t=='J' || t=='N')) || (t0=='I' && (t=='B' || t=='G' || t=='N')) || (t0=='J' && (t=='A' || t=='C' || t=='H')) || (t0=='K' && (t=='B' || t=='D' || t=='E')) || (t0=='L' && (t=='C' || t=='F' || t=='M')) || (t0=='M' && (t=='E' || t=='G' || t=='L')) || (t0=='N' && (t=='F' || t=='H' || t=='I')))
		cout<<endl;
	else
		{
		newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
		goto b12;
	}

	if(t=='A')
	{
	while(a==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a12;
		}
		a=' ';
	}
	else if(t=='B')
	{
	while(b==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a12;
		}
		b=' ';
	}
	else if(t=='C')
	{
	while(c==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a12;
		}
		c=' ';
	}
	else if(t=='D')
	{
	while(d==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a12;
		}
		d=' ';
	}
	else if(t=='E')
	{
	while(e==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a12;
		}
		e=' ';
	}
	else if(t=='F')
	{
	while(f==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a12;
		}
		f=' ';
	}
	else if(t=='G')
	{
	while(g==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a12;
		}
		g=' ';
	}
	else if(t=='H')
	{
	while(h==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a12;
		}
		h=' ';
	}
	else if(t=='I')
	{
	while(i==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a12;
		}
		i=' ';
	}
	else if(t=='J')
	{
	while(j==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a12;
		}
		j=' ';
	}
	else if(t=='K')
	{
	while(k==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a12;
		}
		k=' ';
	}
	else if(t=='L')
	{
	while(l==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a12;
		}
		l=' ';
	}
	else if(t=='M')
	{
	while(m==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a12;
		}
		m=' ';
	}
	else if(t=='N')
	{
	while(n==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a12;
		}
		n=' ';
	}
	else
	{
		cout<<"NOT POSSIBLE"<<endl;
	}
	moves(a,b,c,d,e,f,g,h,i,j,k,l,m,n,t);
	a13:newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
	t0=t;
	b13:cin>>t;
	system("cls");
	comp(t0,t);
	if((t0=='A' && (t=='G' || t=='J')) || (t0=='B' && (t=='H' || t=='I' || t=='K')) || (t0=='C' && (t=='E' || t=='J' || t=='L')) || (t0=='D' && (t=='F' || t=='K')) || (t0=='E' && (t=='C' || t=='K' || t=='M')) || (t0=='F' && (t=='D' || t=='L' || t=='N')) || (t0=='G' && (t=='A' || t=='I' || t=='M')) || (t0=='H' && (t=='B' || t=='J' || t=='N')) || (t0=='I' && (t=='B' || t=='G' || t=='N')) || (t0=='J' && (t=='A' || t=='C' || t=='H')) || (t0=='K' && (t=='B' || t=='D' || t=='E')) || (t0=='L' && (t=='C' || t=='F' || t=='M')) || (t0=='M' && (t=='E' || t=='G' || t=='L')) || (t0=='N' && (t=='F' || t=='H' || t=='I')))
		cout<<endl;
	else
		{
		newgrid(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
		goto b13;
	}

	if(t=='A')
	{
	while(a==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a13;
		}
		a=' ';
	}
	else if(t=='B')
	{
	while(b==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a13;
		}
		b=' ';
	}
	else if(t=='C')
	{
	while(c==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a13;
		}
		c=' ';
	}
	else if(t=='D')
	{
	while(d==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a13;
		}
		d=' ';
	}
	else if(t=='E')
	{
	while(e==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a13;
		}
		e=' ';
	}
	else if(t=='F')
	{
	while(f==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a13;
		}
		f=' ';
	}
	else if(t=='G')
	{
	while(g==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a13;
		}
		g=' ';
	}
	else if(t=='H')
	{
	while(h==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a13;
		}
		h=' ';
	}
	else if(t=='I')
	{
	while(i==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a13;
		}
		i=' ';
	}
	else if(t=='J')
	{
	while(j==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a13;
		}
		j=' ';
	}
	else if(t=='K')
	{
	while(k==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a13;
		}
		k=' ';
	}
	else if(t=='L')
	{
	while(l==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a13;
		}
		l=' ';
	}
	else if(t=='M')
	{
	while(m==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a13;
		}
		m=' ';
	}
	else if(t=='N')
	{
	while(n==' ')
		{
			cout<<"NOT POSSIBLE"<<endl;
			goto a13;
		}
		n=' ';
	}
	else
	{
		cout<<"NOT POSSIBLE"<<endl;
	}

	cout<<"YOU WIN"<<endl;
	goto begin;
	getch();
	exit:return 0;
}