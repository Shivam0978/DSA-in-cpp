  int l;
    cout<<"Enter the no. of lines"<<endl;
    cin>>l;
    for(int i=0;i<l;i++){
        char a='A'+i;
        for(int j=0;j<=i;j++){
            cout<<a<<" ";
        }
        cout<<endl;
    }