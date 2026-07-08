## how does switch statement wil look like
```pinescript
switch(x) {
"EMA" {
ta.ema(20)
}; 
"SMA" {
ta.sma(30)
};
"RMA" {
ta.rma(40)
};
default {
"there's no one match to your number's input"
};
}
```
## how does deep-involving ternary operator will look like
```pinescript
timeframe.isintraday ? color.red : timeframe.isdaily ? color.green : timeframe.ismonthly ? color.blue : na
```
