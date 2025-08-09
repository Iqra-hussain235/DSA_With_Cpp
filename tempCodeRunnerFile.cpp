
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum=0;
            for(int z=i; z<=j; z++){

                sum+=arr[z];
                
            }
            cout<<sum<<" ";
            
