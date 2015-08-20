function [ xnew, ynew ] = PuntosMedios( x, y )
    n = 10;
    xnew = zeros(n,1);
    ynew = zeros(n,1);
    for k=1:n-1
        xnew(k) = ( x(k) + x(k+1))/2;
        ynew(k) = ( y(k) + y(k+1))/2;
    end
    xnew(n) = ( x(n) + x(1))/2;
    ynew(n) = (y(n) + y(1))/2;
end

