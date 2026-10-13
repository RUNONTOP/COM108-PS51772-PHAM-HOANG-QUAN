double tongTien = 0;
    int conLai = kwh;
    if (conLai > 50) {
        tongTien += 50 * 1678;
        conLai -= 50;
    } else {
        tongTien += conLai * 1678;
        conLai = 0;
    }
    
    if (conLai > 0) {
        if (conLai > 50) {
            tongTien += 50 * 1734;
            conLai -= 50;
        } else {
            tongTien += conLai * 1734;
            conLai = 0;
        }
    }
    if (conLai > 0) {
        if (conLai > 100) {
            tongTien += 100 * 2014;
            conLai -= 100;
        } else {
            tongTien += conLai * 2014;
            conLai = 0;
        }
    }
    if (conLai > 0) {
        if (conLai > 100) {
            tongTien += 100 * 2536;
            conLai -= 100;
        } else {
            tongTien += conLai * 2536;
            conLai = 0;
        }
    }
    if (conLai > 0) {
        if (conLai > 100) {
            tongTien += 100 * 2834;
            conLai -= 100;
        } else {
            tongTien += conLai * 2834;
            conLai = 0;
        }
    }
    if (conLai > 0) {
        tongTien += conLai * 2927;
    }
     printf("Tong tien dien phai tra: %.0f dong\n", tongTien);
