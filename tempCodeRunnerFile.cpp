 for(int j=0;j<pal.size();j++){
                int curr=(a[i]^pal[j]);
                ans+=cnt[curr];
            }