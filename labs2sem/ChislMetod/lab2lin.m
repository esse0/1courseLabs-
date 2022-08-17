x=[10, 11, 13, 16, 18, 20, 21, 25, 28, 30];
y=[3.3, 4, 5.1, 7, 11, 13, 14, 15, 17, 18];
n = 10;
grid on;
a1=(sum(x)*sum(y)-n*x*y')/(sum(x)^2-n*sum(x.^2));
a0=(1/n)*(sum(y)-a1*sum(x));
y1=a0+a1*x;
plot(x, y, color, 'r');