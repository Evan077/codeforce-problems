#include<bits/stdc++.h>
using namespace std;
void evan()
{
  long long int n,z=0,o=0,l_fi=0,l_fo=0,us=0,c=0,p=0;
  cin>>n;
  long long int s[n];
  long long int d[n];
  for(long long int i=0;i<n;i++)
  {
    cin>>s[i];
  }
  for(long long int i=0;i<n;i++)
  {
    cin>>d[i];
  }
  long long int fi[n];
  long long int fo[n]; 
  for(long long int i=0;i<n;i++)
  {
    if(s[i]==0)
    {
      fi[z]=d[i];
      z++;
      l_fi++;
    }
    else if(s[i]==1)
    {
      fo[o]=d[i];
      o++;
      l_fo++;
    }
  }
  sort(fi,fi+l_fi);
  sort(fo,fo+l_fo);
  z=0;
  o=0;
  for(long long int i=0;i<n;i++)
  {
    if(s[i]==0)
    {
      z++;
    }
    else if(s[i]==1)
    {
      o++;
    }
  }
  if(z<o)
  {
    us=fo[0];
  }
  else if(o<z)
  {
    us=fi[0];
  }
  else if(z==o)
  {
    p++;
    sort(d,d+n);
    for(int i=1;i<n;i++)
    {
        us=us+2*d[i];
    }
    us=us+d[0];
  }
  if(p==0){
  for(int i=z-1;i>=0;i--)
  {
    if(z<o)
    {
        us=us+2*fi[i];
    }
    else if(z>o)
    {
        if(c<o)
        {
          us=us+2*fi[i];
          c++;
        }
        else if(c>=o&& i!=0)
        {
            us=us+fi[i];
        }
    }
  }
  c=0;
  for(int i=o-1;i>=0;i--)
  {
    if(o<z)
    {
        us=us+2*fo[i];
    }
    else if(o>z)
    {
      if(c<z)
      {
        us=us+2*fo[i];
        c++;
      }
      else if(c>=z&&i!=0)
      {
        us=us+fo[i];
      }
    }
  }
  }
  cout<<us<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        evan();
    }
}
