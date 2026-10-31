class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mp={}
        for word in strs:
            temp=''.join(sorted(word))
            if temp not in mp:
                mp[temp]=[]
            mp[temp].append(word)
        res=[]
        for key,value in mp.items():
            res.append(value)
        return res
        