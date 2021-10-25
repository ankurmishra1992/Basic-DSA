bool palindrome(string str){
  int size=str.length();
  for(int i=0;i<size;i++){
    if(str[i]!=str[size-1-i])
      return false;
  }
  return true;
