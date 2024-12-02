#include <iostream>
#include <string>
using namespace std;
	int x,y,k,a,b,ans,z=0,op;
	string enc,code,key,decrypt;
	
	//Itroduction of the programme
void intro()
{

	cout<<"\t\t\tWelcome"<<endl;
	cout<<"\t\t\t-------"<<endl;
	cout<<"Choose the number of the cipher you want to use:\n"
	<<"(1)- Ceaser Cipher\n"
	<<"(2)- Vigenere Cipher"<<endl;
	cin>>x;
	if(x==1||x==2){system("cls");}
	else
	{
		cin.clear();
		cin.ignore(1,'\n');
		system("cls");
	cout<<"Invalide number"<<endl;
    intro();	
	}
}

//First the ceaser cipher
void ceaser()
{
	cout<<"\t\t\tWelcome to Ceaser Cipher"<<endl;
	cout<<"\t\t\t------------------------"<<endl;	
	cout<<"Choose the option you want :\n"
	<<"(1)- Encrypting\n"
	<<"(2)- Decrypting\n"<<endl;
	cin>>y;
		if(y==1||y==2){system("cls");}
		else
	{
				cin.clear();
		cin.ignore(1,'\n');
		system("cls");
	cout<<"Invalide number"<<endl;
	ceaser();
	}

}


//Encrypting the ceaser cipher
void enc_ceaser()
{
do
{
	cout<<"Please enter the word or sentence to be encrypted :\n"<<endl;
	cin.ignore(1,'\n');
getline(cin, enc);

for(int i=0;i<  enc.length();i++)
{
	     if(enc[i]>64&&enc[i]<91)
     {

     		enc[i]+=3;
     		
     		if(enc[i]>90)
     		{
     		enc[i]-=26;
     	}

	}
	else if(enc[i]>96&&enc[i]<123)
	{
	
		enc[i]+=3;

				if(enc[i]>122)
     		enc[i]-=26;
}
else if(enc[i]>0&&enc[i]<65&&enc[i]!=32||enc[i]>90&&enc[i]<97||enc[i]>122)
{
	system("cls");
	cout<<"Error, please try again\n\n";
	enc_ceaser();
}
}
	
cout<<"\nThe encrypted code is :\n\n"<<enc;
cout<<"\n\nWould you like to encrypt another sentence?\n\n (1)-yes\n\n (2)-No"<<endl;
cin>>a;
system("cls");
}
while(a==1);
	
}


//Decrypting the ceaser cipher
void dec_ceaser()
{
	do
{
	cout<<"Please enter the word or sentence to be decrypted :\n"<<endl;
	cin.ignore(1,'\n');
getline(cin, decrypt);
	for(int i=0;i<  decrypt.length();i++)
	{
	 if(decrypt[i]>64&&decrypt[i]<91)
     {

     		decrypt[i]-=3;
     		if(decrypt[i]<65)
     		decrypt[i]+=26;

	}
	else if(decrypt[i]>96&&decrypt[i]<123)
	{

		decrypt[i]-=3;
				if(decrypt[i]<97)
     		decrypt[i]+=26;
	}
else if(decrypt[i]>0&&decrypt[i]<65&&decrypt[i]!=32||decrypt[i]>90&&decrypt[i]<97||decrypt[i]>122)
{
	system("cls");
	cout<<"Error, please try again\n\n";
	dec_ceaser();	
}
}
cout<<"\nThe decrypted code is :\n\n"<<decrypt;
cout<<"\n\nWould you like to decrypt another sentence?\n\n (1)-yes\n\n (2)-No"<<endl;
cin>>b;
system("cls");
}
while(b==1);
} 


//Second the vigenere cipher
void vigenere()
{
	cout<<"\t\t\tWelcome to vigenere Cipher"<<endl;
	cout<<"\t\t\t--------------------------"<<endl;
	cout<<"Choose the option you want :\n"
	<<"(1)- Encrypting\n"
	<<"(2)- Decrypting"<<endl;
	cin>>y;
			if(y==1||y==2){system("cls");}
			else
	{
				cin.clear();
		cin.ignore(1,'\n');
		system("cls");
	cout<<"Invalide number"<<endl;
	vigenere();
	}

}


//Encrypting the vigenere cipher
void enc_vigenere()
{
	do
	{
	cout<<"Please enter the word or sentence to be encrypted :\n NOTE:(Upper case letters only)\n"<<endl;
	cin.ignore(1,'\n');
getline(cin, enc);
	cout<<"Please enter the key"<<endl;
	cin>>key;
for(int i=0;i<enc.length();i++)
	{
		if(enc[i]>64&&enc[i]<91)
		{
		
code[i]=enc[i]+key[z];
z++;
if(z==key.length())
z=0;
code[i]-=65;
 if(code[i]>90)
 code[i]-=26;
}

else if(enc[i]==32)
{
	code[i]=32;
}

else 
{
	system("cls");
	cout<<"\nError please try again\n";
	enc_vigenere();
}
}

	
cout<<"\n The encrypted text:\n";
	for(int i=0;i<enc.length();i++)
	{
		cout<<code[i];
}
cout<<endl;
cout<<"\n\nWould you like to encrypt another sentence?\n\n (1)-yes\n\n (2)-No"<<endl;
cin>>a;
for(int i=0;i<enc.length();i++)
{
	code[i]=0;	
}
z=0;
system("cls");
}
while(a==1);
}


//Decrypting the vigenere cipher
void dec_vigenere()
{
	do
	{
	cout<<"Please enter the word or sentence to be decrypted :\n NOTE:(Upper case letters only)\n"<<endl;
	cin.ignore(1,'\n');
getline(cin, decrypt);
	cout<<"Please enter the key"<<endl;
	cin>>key;
		for(int i=0;i<decrypt.length();i++)
	{
	
			if(decrypt[i]>64&&decrypt[i]<91)
		{

code[i]=decrypt[i]-(key[z]);
z++;
if(z==key.length())
z=0;
code[i]+=65;
 if(code[i]<65)
 code[i]+=26;
}
else if(decrypt[i]==32)
{
	code[i]=32;
}
else
{
	system("cls");
	cout<<"\nError please try again";
	dec_vigenere();
}
}

cout<<"\n The decrypted text:\n";
	for(int i=0;i<decrypt.length();i++)
	{
		cout<<code[i];
}
cout<<endl;
cout<<"\n\nWould you like to decrypt another sentence?\n\n (1)-yes\n\n (2)-No"<<endl;
cin>>b;
	for(int i=0;i<decrypt.length();i++)
	{
		code[i]=0;
}
z=0;
system("cls");
}
while(b==1);	

}



int main()
{
do
{	
system("cls");	
intro();

if(x==1)
{
do{
   ceaser();
if(y==1)
{
enc_ceaser();
cout<<"\n\n Would you like to return to the pervious menu?\n\n (1)-yes\n\n (2)-No\n";
cin>>op;
system("cls");
}
else if(y==2)
{
dec_ceaser();
cout<<"\n\n Would you like to return to the pervious menu?\n\n (1)-yes\n\n (2)-No\n";
cin>>op;
system("cls");
}
}
while(op==1);
}

else if(x==2)
{
	do
	{
vigenere();	
if(y==1)
{
enc_vigenere();
cout<<"\n\n Would you like to return to the pervious menu?\n\n (1)-yes\n\n (2)-No\n";
cin>>op;
system("cls");
}
else if(y==2)
{
dec_vigenere();
cout<<"\n\n Would you like to return to the pervious menu?\n\n (1)-yes\n\n (2)-No\n";
cin>>op;
system("cls");
}
}
while(op==1);
}

cout<<"Would you like to start again?\n\n (1)-Yes\n\n (2)-No"<<endl;
cin>>ans;
}
while(ans==1);

return 0;
}
