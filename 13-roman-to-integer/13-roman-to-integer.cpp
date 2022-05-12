class Solution {
public:
    int addChar(char i) {
	    if (i == 'I') {
		    return 1;
	    }
	    else if (i == 'V') {
		    return 5;
	    }
	    else if (i == 'X') {
		    return 10;
    	}
	    else if (i == 'L') {
		    return 50;
	    }
    	else if (i == 'C') {
	    	return 100;
	    }
	    else if (i == 'D') {
		    return 500;
	    }
    	else if (i == 'M') {
	    	return 1000;
	    }   
        return 0;
    }
	
    int romanToInt(string s) {
	    int result{};
	    for (int i{}; i < s.size() - 1; i++) {
		    if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X')) {
			    result -= addChar(s[i]);
		    }
	    	else if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')) {
		    	result -= addChar(s[i]);
		    }   
    		else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M')) {
		    	result -= addChar(s[i]);
	    	}
		    else {
			    result += addChar(s[i]);
	    	}
	    }
	    result += addChar(s[s.size() - 1]);
	    return result;
    }
};