class Solution:

    def encode(self, strs: List[str]) -> str:
        output = ""
        for string in strs:
            length = len(string)
            outstring = str(length) + ":" + string
            output = output + outstring
        
        return output

    def decode(self, s: str) -> List[str]:
        if len(s) == 2:
            return [""]
        output = []
        i = 0
        print(s)
        print(len(s))
        while i < (len(s)):
            print(i)
            print("Current char " + s[i])
            if (s[i + 2].isdigit() and s[i + 1] != ":"):
                ext = 2
            elif (s[i + 1].isdigit()):
                ext = 1
            else: 
                ext = 0
            print("ext: " + str(ext))
            amount = int(s[i:i+ext+1]) if ext > 0 else int(s[i])
            print("Amount: " + str(amount))
            output.append(s[i + ext + 2:i + ext + 2 + amount])

            print(output)
            i += amount + ext + 2
    
        return output