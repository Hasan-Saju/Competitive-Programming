
mincost(x,y)=cost[x][y]+min(mincost(x-1,y),mincost(x,y-1));
