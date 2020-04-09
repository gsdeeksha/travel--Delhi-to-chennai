# travel--Delhi-to-chennai
You are a passenger on a train journey from Delhi to Chennai, you may opt for any out of the two (direct trains or connecting trains) the connecting stations being nagpur, pune, vizag and hydrabad.
Your goal is to
1. Opt for the journey that is the least expensive
    i.e. specify the route eg : Delhi>Nagpur>Hyedrabad>Chennai. 
2. Arrange all the possible routes with costs in non decreasing order.
     Eg:
         Delhi  Chennai  40 
         Delhi  pune  Chennai  60  
         Delhi  nagpur  Chennai  80 
         Delhi  pune  vizag  Chennai  80
         Delhi  vizag  Chennai  120 
         Delhi  nagpur  vizag  pune Chennai  140 

3.  In case if none of the given routes reach the destination then print “ not reachable ”


For example
Input format 
 6    // the number of routes as input.
  
pune  chennai  190  //These are the possible routes.
delhi  hydrabad  55
nagpur  pune  70
delhi  nagpur  50
Pune  nagpur  85
hydrabad  nagpur  80

 
 
And the ouput is :
 
Enter the no of routes 6
enter the details
pune  chennai  190
delhi  hydrabad  55
nagpur  pune  70
delhi  nagpur  50
Pune  nagpur  85
hydrabad  nagpur  80

The route

Delhi hydrabad  nagpur  pune  Chennai  395

Delhi nagpur  pune  Chennai  310


Example; 2
7
vizag  nagpur  50
nagpur pune 44
hydrabad nagpur 72
delhi  vizag 76  
hydrabad  chennai  44
Pune vizag 60
nagpur  hydrabad  92

Output
Enter the no of routes 7
enter the details
vizag  nagpur  50
nagpur pune 44
hydrabad nagpur 72
delhi  vizag 76
hydrabad  chennai  44
Pune vizag 60
nagpur  hydrabad  92


 Not reachable





 
 
 
 
 
 
 
 
 
 
 
 
 
