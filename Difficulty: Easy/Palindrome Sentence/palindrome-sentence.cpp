class Solution {
public:
    bool isPalindrome(string s) {
      /* 1.Brute force t.c - O(n) s.c - O(n)
        int n = s.size();
        vector<int> temp;
        if(n==0)
        {
            return true;
        }
        for( int i=0;i<n;i++)
        {
            s[i]=tolower(s[i]);
            if(s[i]>='a' && s[i]<='z')
            {
                temp.push_back(s[i]);
            }
        }
        int i=0,j=temp.size()-1;
        while(i<j)
        {
            if(temp[i]==temp[j])
            {
                i++;j--;
            }
            else{
                return false;
            }
        }
        return true;*/
       /* My Optimal solution (n) and (1) */
        int n = s.size();
        int i=0,j=n-1;
        while(i<j)
        {

            if(!isalnum(s[i]))
            {
                i++; 
                continue;
            } 
            else if(!isalnum(s[j]))
            {
                j--; 
                continue;
            } 
            if(tolower(s[i])==tolower(s[j]))
            {
                i++;j--;
            }
            else
            {
                return false;
            }
        }
        return true; 
    }
};

/* GFG Optimal code 
function isPalinSent(s) {
    let i = 0, j = s.length - 1;

    // Compares character until they are equal
    while (i < j) {

        // Skip non alphabet character
        // from left side
        if (!s[i].match(/[a-zA-Z0-9]/))
            i++;

        // Skip non alphabet character
        // from right side
        else if (!s[j].match(/[a-zA-Z0-9]/))
            j--;

        // If characters are equal
        // update the pointers
        else if (s[i].toLowerCase() === s[j].toLowerCase())
            i++, j--;

        // If characters are not equal then
        // sentence is not palindrome
        else
            return false;
    }

    return true;
}

// Driver Code
let s = "Too hot to hoot.";
console.log(isPalinSent(s) ? "true" : "false");  */
