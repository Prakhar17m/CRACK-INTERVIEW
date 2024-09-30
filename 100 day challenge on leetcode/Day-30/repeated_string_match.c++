class Solution {
private:
    int BASE = 1000000;

public:
    int Rabin_Karp(string &source, string &target) {
        

        int sourceSize=source.size();
        int targetSize=target.size();

        int power=1;
        
        // ye power jab hum left se remove karenge (basically 
        // jab apni window ko aage badhaayenge)toh targetSize jitni 
        // position pe hoga toh usko usse multiply karke hi remove
        // karna padega

        for(int times=0;times<targetSize;times++){
            power=(power*29)%BASE;
        }

        // converting target using hash Function (jo hash function
        // hum use kar rahe hain usse rabin fingerPrint expression
        // kehte hain

        int targetCode=0;
        for(int index=0;index<targetSize;index++){
            targetCode=(targetCode*29 + target[index])%BASE;
        }

        int hashCode=0;
        for(int index=0;index<sourceSize;index++){
            hashCode=(hashCode*29 + source[index])%BASE;

            // jab tak humaara hashCode targetSize jitni length
            // ke liye ni bann jaata tab tak kuch
            // karne ki need ni hain.

            if(index<targetSize-1){continue;}

            if(index>=targetSize){
                hashCode = (hashCode - source[index-targetSize]*power)%BASE;
            }

            if(hashCode<0){hashCode+=BASE;}

            if(hashCode==targetCode){
                // yaha ab hum check karenge ki strings aapas mein
                // equal hain kya
                if((source.substr(index-targetSize+1,targetSize)) == target){
                    
                    // yaha mein 1 bhi return karunga toh hojaayega bas rabin karp ko full 
                    // implement kiya hain
                    
                    return index-targetSize+1;
                }

            }
            
        }
        //pura comparision karne ke baad bhi kuch ni mila toh yaha aayenge

        return -1;

    }
    int repeatedStringMatch(string A, string B) {
        if(A==B){return 1;}

        int count=1;
        string source=A;

        //obvious baat hain ki agar size chota hoga source ka toh usmein toh target ni milega
        while(source.size()<B.size()){
            count++;
            source.append(A);
        }
        
        //may be source aur target equal hogaye ho

        if(source==B){return count;}

        if(Rabin_Karp(source,B)!=-1){
            return count;
        }
        source.append(A);
        
        // ye phirse isliye append isliye check kiya hain kyuki agar kuch elements start mein ho 
        // aur kuch part end mein ho toh usko counter karne ke liye. 
        
        if(Rabin_Karp(source,B)!=-1){
            return count+1;
        }
        
        // return -1 because baaki sab if conditions mein hain

        return -1;


    }
};