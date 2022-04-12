TC-O(N)
SC-O(1)  due to 26 size

vector<int> findAnagrams(string s, string p) {
        
        vector<int>ans;
        vector<int>p_freq(26,0);
        vector<int>window(26,0);
         if(s.size() < p.size()) return {};
        
        for(int i=0;i<p.length();i++){
            p_freq[p[i] - 'a']++;
            window[s[i] - 'a']++;
            
        }
        
        
        if(window==p_freq){ans.push_back(0);}
        
        for(int i=p.length();i<s.length();i++){
            
            window[s[i-p.length()]- 'a']--;
            window[s[i]- 'a']++;
            if(window==p_freq){ans.push_back(i-p.length()+1);}
            
            
            
        }
        
        
        return ans;
        
        
    }
