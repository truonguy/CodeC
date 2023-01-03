#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int slgDB = 0;
int slgLTD = 0;
int slgKQTD = 0;

struct DoiBong
{
    char MaDB[30];
    char TenDB[30];
    char TenHLV[30];
};

struct NgayThiDau
{
    int ngay;
    int thang;
    int nam;
};

struct LichThiDau
{
    char TranDau[60];
    char GioThiDau[10];
    struct NgayThiDau ngayThiDau;
    char SanThiDau[30];
};

struct KetQuaThiDau
{
    char NhapTran[60];
    char KQ1[30];
    char KQ2[30];
};

void MenuChinh()
{
    printf("\n--- Chao mung den voi V-League 2021 ---\n");
    printf("=======================================\n");
    printf("1. Quan ly danh sach doi bong\n");
    printf("2. Quan ly lich thi dau\n");
    printf("3. Quan ly ket qua thi dau\n");
    printf("0. Thoat\n");
}
void QlyDSDB()
{
    printf("=======QUAN LY DANH SACH DOI BONG=======\n");
    printf("1. Xem danh sach doi bong\n");
    printf("2. Cap nhat thong tin doi bong\n");
    printf("3. Them doi bong\n");
    printf("4. Xoa doi bong\n");
    printf("0. Tro ve menu chinh\n");
}

void KetQuaTD()
{
    printf("\n--- QUAN LY KET QUA THI DAU ---\n");
    printf("=======================================\n");
    printf("1. Xem ket qua thi dau\n");
    printf("2. Nhap ket qua thi dau\n");
    printf("0. Thoat\n");
}

void XemDSDB(struct DoiBong ArrDB[100])
{
    printf("========XEM DANH SACH DOI BONG=======\n");
    if (slgDB == 0)
    {
        printf("Chua co DB nao\n");
    }
    else
    {
        printf("Ma DB \t Ten DB \t Ten HLV\n");
        for (int i = 0; i < slgDB; i++)
        {
            printf(" %s \t %s \t\t %s \n", ArrDB[i].MaDB, ArrDB[i].TenDB, ArrDB[i].TenHLV);
        }
    }
}

void CapNhatThongTinDB(struct DoiBong ArrDB[100], int slgDB, char ma[30])
{
    for (int i = 0; i < slgDB; i++)
    {
        if (strcmp(ArrDB[i].MaDB, ma) == 0)
        {
            printf("Sua ten DB: ");
            fflush(stdin);
            gets(ArrDB[i].TenDB);
            printf("Sua ten HLV: ");
            fflush(stdin);
            gets(ArrDB[i].TenHLV);
        }
        else
        {
            printf("Khong tim thay doi!\n");
        }
        break;
    }
}

void ThemDB(struct DoiBong ArrDB[100])
{
    printf("========THEM DOI BONG========\n");
    printf("Nhap ma doi %d: ", slgDB + 1);
    fflush(stdin);
    gets(ArrDB[slgDB].MaDB);

    printf("Nhap ten doi %d: ", slgDB + 1);
    fflush(stdin);
    gets(ArrDB[slgDB].TenDB);
    printf("Nhap ten huan luyen vien %d: ", slgDB + 1);
    fflush(stdin);
    gets(ArrDB[slgDB].TenHLV);
}

void QlyLTD()
{
    printf("==========QUAN LY LICH THI DAU=========\n");
    printf("1. Xem lich thi dau\n");
    printf("2. Tao lich thi dau\n");
    printf("0. Tro ve menu chinh\n");
}
void XemLTD(struct LichThiDau ArrLTD[100])
{
    printf("==========XEM LICH THI DAU=========\n");
    if (slgLTD == 0)
    {
        printf("Chua co lich thi dau nao de hien thi!\n");
    }
    else
    {
        for (int i = 0; i < slgLTD; i++)
        {
            printf(".\tTran dau: %s\n", ArrLTD[i].TranDau);
            printf(".\tNgay thi dau: %d/%d/%d\n", ArrLTD[i].ngayThiDau.ngay, ArrLTD[i].ngayThiDau.thang, ArrLTD[i].ngayThiDau.nam);
            printf(".\tGio thi dau: %s\n", ArrLTD[i].GioThiDau);
            printf(".\tSan thi dau: %s\n", ArrLTD[i].SanThiDau);
        }
    }
}
void TaoLTD(struct LichThiDau ArrLTD[100])
{
    printf("==========TAO LICH THI DAU========\n");
    printf("Tran: ");
    fflush(stdin);
    gets(ArrLTD[slgLTD].TranDau);
    printf("Ngay thi dau: \n");
    printf("Ngay: ");
    scanf("%d", &ArrLTD[slgLTD].ngayThiDau.ngay);
    printf("Thang: ");
    scanf("%d", &ArrLTD[slgLTD].ngayThiDau.thang);
    printf("Nam: ");
    scanf("%d", &ArrLTD[slgLTD].ngayThiDau.nam);
    printf("Gio TD: ");
    fflush(stdin);
    gets(ArrLTD[slgLTD].GioThiDau);
    printf("San TD: ");
    fflush(stdin);
    gets(ArrLTD[slgLTD].SanThiDau);
    slgLTD++;
}
void ThemKQTD(struct KetQuaThiDau ArrKQTD[100])
{
    printf("==========THEM KET QUA THI DAU============\n");
    printf("Nhap tran: ");
    fflush(stdin);
    gets(ArrKQTD[slgKQTD].NhapTran);
    printf("Ket qua ");
    fflush(stdin);
    gets(ArrKQTD[slgKQTD].KQ1);
    printf("Ket qua ");
    fflush(stdin);
    gets(ArrKQTD[slgKQTD].KQ2);
    slgKQTD++;
}
void HienThiKQTD(struct KetQuaThiDau ArrKQTD[100])
{
    printf("========XEM KET QUA TRAN DAU=======\n");
    if (slgKQTD == 0)
    {
        printf("Chua co du lieu!\n");
    }

    for (int i = 0; i < slgKQTD; i++)
    {
        printf("Tran: %s\nKet qua: %s\nKet qua: %s\n", ArrKQTD[i].NhapTran, ArrKQTD[i].KQ1, ArrKQTD[i].KQ2);
    }
}

void XoaDBTheoMa(struct DoiBong ArrDB[100], int slgDB, char ma[30])
{
    for (int i = 0; i < slgDB; i++)
    {
        if (strcmp(ArrDB[i].MaDB, ma) == 0)
        {
            for (int j = i; j < slgDB; j++)
            {
                ArrDB[j] = ArrDB[j + 1];
            }
            slgDB -= 1;
            return;
        }
    }
}

int main()
{
    struct DoiBong ArrDB[100];
    struct LichThiDau ArrLTD[100];
    struct KetQuaThiDau ArrKQTD[100];
    int slgKQTD = 0;
    int chon = 0;
    char ma[10];
    int slgdb = 0;
    int slgLTD = 0;
    do
    {
        MenuChinh();
        printf("Chon: ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1: // qlyDSDB
        {
            int qldsdb = 0;
            do
            {
                QlyDSDB();
                printf("Chon: ");
                scanf("%d", &qldsdb);
                switch (qldsdb)
                {
                case 1: // xem DSDB
                {
                    XemDSDB(ArrDB);
                    printf("================================\n");
                    qldsdb = 0;
                    char yn;
                    do
                    {
                        printf("ban muon thoat? Y/N?");
                        scanf("%s", &yn);
                    } while (yn != 'Y');
                    break;
                }
                case 2: // cap nhat thong tin DB
                {
                    char ma[30];
                    printf("========CAP NHAT THONG TIN DOI BONG========\n");
                    printf("Nhap ma DB: ");
                    fflush(stdin);
                    gets(ma);
                    CapNhatThongTinDB(ArrDB, slgDB, ma);
                    XemDSDB(ArrDB);
                    printf("Ban dang o chuc nang cap nhat doi bong\n ");
                    break;
                }
                case 3: // them db
                {
                    ThemDB(ArrDB);
                    slgDB++;
                    char yn;
                    do
                    {
                        printf("ban muon them DB? Y/N?");
                        scanf("%s", &yn);
                    } while (yn != 'Y');
                    break;
                }

                case 4: // xoa DB
                {
                    char ma[30];
                    printf("Nhap ma DB can xoa: ");
                    fflush(stdin);
                    gets(ma);
                    XoaDBTheoMa(ArrDB, slgDB, ma);
                    char yn;
                    do
                    {
                        printf("ban muon xoa DB? Y/N?");
                        scanf("%s", &yn);
                    } while (yn != 'Y');
                    XemDSDB(ArrDB);
                    break;
                }

                case 0: // tro ve menu chinh
                {
                    printf("Ban da thoat khoi chuc nang quan li danh sach doi bong!\n");
                    break;
                }
                default:
                {
                    printf("Chon lai: ");
                    break;
                }
                }
            } while (qldsdb != 0);
            break;
        }
        case 2: // quan li lich thi dau
        {
            int qlltd = 0;
            do
            {
                QlyLTD();
                printf("Chon: ");
                scanf("%d", &qlltd);
                switch (qlltd)
                {
                case 1: // xem lich thi dau
                {
                    XemLTD(ArrLTD);
                    qlltd = 0;
                    char yn;
                    do
                    {
                        printf("ban muon thoat? Y/N?");
                        scanf("%s", &yn);
                    } while (yn != 'Y');
                    break;
                }
                case 2: // tao lich thi dau
                {
                    TaoLTD(ArrLTD);
                    slgLTD++;
                    char yn;
                    do
                    {
                        printf("ban muon tao lich? Y/N?");
                        scanf("%s", &yn);
                    } while (yn != 'Y');
                    XemLTD(ArrLTD);
                    break;
                }

                case 0: // tro ve menu chinh
                {
                    printf("Ban da thoat khoi chuc nang quan ly lich thi dau!\n");
                    break;
                }
                default:
                {
                    printf("Vui long chon lai: ");
                    break;
                }
                }
            } while (qlltd != 0);
            break;
        }
        case 3: // quan li ket qua thi dau
        {

            int chonkq = 0;
            do
            {
                KetQuaTD();
                printf("Chon: ");
                scanf("%d", &chonkq);
                switch (chonkq)
                {
                case 0: // thoat
                {
                    MenuChinh();
                    printf("Ban da thoat khoi chuc nang quan ly KQTD!\n");
                    break;
                }
                case 1: // xem KQ
                {
                    int qlkqtd = 0;
                    HienThiKQTD(ArrKQTD);
                    char yn;
                    do
                    {
                        printf("ban muon thoat? Y/N?");
                        scanf("%s", &yn);
                    } while (yn != 'Y');
                    XemLTD(ArrLTD);
                    break;
                }
                case 2: // Nhap Kq
                {
                    ThemKQTD(ArrKQTD);
                    slgKQTD++;
                    char yn;
                    do
                    {
                        printf("ban muon them KQTD? Y/N?");
                        scanf("%s", &yn);
                    } while (yn != 'Y');
                    XemLTD(ArrLTD);
                    break;
                }
                default:
                    break;
                }
            } while (chonkq != 0);

            break;
        }
        case 0: // thoat
        {
            printf("Ban da thoat khoi chuong trinh!");
            break;
        }
        default:
        {
            printf("Vui long chon lai: ");
            break;
        }
        }
    } while (chon != 0);

    return 0;
}