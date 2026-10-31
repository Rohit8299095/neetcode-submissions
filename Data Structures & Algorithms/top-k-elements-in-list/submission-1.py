class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp={}
        for num in nums:
          mp[num]=mp.get(num,0)+1
        pq=[]
        for num,fre in mp.items():
             heapq.heappush(pq,(fre,num))
             if len(pq)>k:
                 heapq.heappop(pq)
        res=[]
        while pq:
            fre,ele=heapq.heappop(pq)
            res.append(ele)
        return res
       
