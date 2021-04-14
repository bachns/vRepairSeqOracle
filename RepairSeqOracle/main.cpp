#include <QtCore/QCoreApplication>
#include <QDirIterator>
#include <QFile>
#include <QFileInfo>
#include <QTextStream>
#include <QDebug>
#include <QMap>

void init(QMap<QString, QString>& map)
{
	map.clear();
	map.insert("ANHHANGKHONGDVHC-ODB", "FCSEQ");
	map.insert("ANHHANGKHONGTYPE-ODB", "FCSEQ");
	map.insert("BANDODVHC-ODB", "FCSEQ");
	map.insert("BANDOTYPE-ODB", "FCSEQ");
	map.insert("BANGCHAP-ODB", "FCSEQ");
	map.insert("BOVACOQUANNGANGBO-ODB", "SEQ");
	map.insert("CAPHANGTYPE-ODB", "FCSEQ");
	map.insert("CAUHINH-ODB", "FCSEQ");
	map.insert("CHAULUC-ODB", "FCSEQ");
	map.insert("CHUCNANG-ODB", "FCSEQ");
	map.insert("CHUCVU-ODB", "FCSEQ");
	map.insert("DANGKYDIACHINGAN-ODB", "FCSEQ");
	map.insert("DANGKYNHOM-ODB", "FCSEQ");
	map.insert("DANHMUCCOQUANTYPE-ODB", "FCSEQ");
	map.insert("DANHVAN-ODB", "FCSEQ");
	map.insert("DIADANHDANCU-ODB", "FCSEQ");
	map.insert("DIADANHHANHCHINH-ODB", "SEQ");
	map.insert("DIADANHQUOCTE-ODB", "FCSEQ");
	map.insert("DIADANH_DIADANHID-ODB", "SEQ");
	map.insert("DINHDANGTYPE-ODB", "FCSEQ");
	map.insert("DONVITINHTYPE-ODB", "FCSEQ");
	map.insert("DUYETDONHANG-ODB", "FCSEQ");
	map.insert("GCDDOCAOVATCHUAN-ODB", "FCSEQ");
	map.insert("GCDDOCAO-ODB", "FCSEQ");
	map.insert("GCDTOADODIEMLIENQUAN-ODB", "FCSEQ");
	map.insert("GCDTOADOVATCHUAN-ODB", "FCSEQ");
	map.insert("GCDTOADO-ODB", "FCSEQ");
	map.insert("GCDTRONGLUCVATCHUAN-ODB", "FCSEQ");
	map.insert("GCDTRONGLUC-ODB", "FCSEQ");
	map.insert("GIATRIDOCAO-ODB", "FCSEQ");
	map.insert("GIATRITOADO-ODB", "FCSEQ");
	map.insert("GIATRITRONGLUC-ODB", "FCSEQ");
	map.insert("GIA-ODB", "FCSEQ");
	map.insert("GIOITINHNGUPHAP-ODB", "SEQ");
	map.insert("HEDOCAOTYPE-ODB", "FCSEQ");
	map.insert("HEQUYCHIEUTYPE-ODB", "FCSEQ");
	map.insert("HUYEN-ODB", "FCSEQ");
	map.insert("KHACHHANG-ODB", "FCSEQ");
	map.insert("KHO-ODB", "FCSEQ");
	map.insert("K_PHIEUDATHANGCHITIET-ODB", "SEQ");
	map.insert("K_PHIEUDATHANG-ODB", "SEQ");
	map.insert("K_PHIEUNHAPKHOCHITIET-ODB", "SEQ");
	map.insert("K_PHIEUNHAPKHO-ODB", "SEQ");
	map.insert("K_TULIEUDAIDIA-ODB", "SEQ");
	map.insert("K_TULIEUKHOKHAC-ODB1", "SEQ1");
	map.insert("K_TULIEUKHO-ODB3", "SEQ3");
	map.insert("K_TULIEUPHIMANHHK-ODB", "SEQ");
	map.insert("LOAIANHTYPE-ODB", "FCSEQ");
	map.insert("LOAIDAT-ODB", "FCSEQ");
	map.insert("LOAIKHACHHANG-ODB", "FCSEQ");
	map.insert("LOAIMOC-ODB", "FCSEQ");
	map.insert("LOG-ODB", "FCSEQ");
	map.insert("MAYANHTYPE-ODB", "FCSEQ");
	map.insert("MUCXULYTYPE-ODB", "FCSEQ");
	map.insert("NGAN-ODB", "FCSEQ");
	map.insert("NGUOIDUNG-ODB", "FCSEQ");
	map.insert("NGUOIKY-ODB", "FCSEQ");
	map.insert("NGUONGOCTEN-ODB", "SEQ");
	map.insert("NGUONVONTYPE-ODB", "FCSEQ");
	map.insert("NHOMDOITUONG-ODB", "SEQ");
	map.insert("NHOMNGUOIDUNG-ODB", "FCSEQ");
	map.insert("NHOMTULIEU-ODB", "SEQ");
	map.insert("PHAMVIANHTYPE-ODB", "FCSEQ");
	map.insert("PHAMVICHUPTYPE-ODB", "FCSEQ");
	map.insert("PHANQUYENNGUOIDUNG-ODB", "FCSEQ");
	map.insert("PHANQUYENNHOMNGUOIDUNG-ODB", "FCSEQ");
	map.insert("PHATAM-ODB", "SEQ");
	map.insert("PHIENAM-ODB", "SEQ");
	map.insert("PHIENLAMVIEC-ODB", "FCSEQ");
	map.insert("PHIEUDATHANGCHITIET-ODB", "FCSEQ");
	map.insert("PHIEUDATHANG-ODB", "FCSEQ");
	map.insert("PHIEUNHAPKHOCHITIET-ODB", "FCSEQ");
	map.insert("PHIEUNHAPKHO-ODB", "FCSEQ");
	map.insert("PHIEUTHU-ODB", "FCSEQ");
	map.insert("PHONG-ODB", "FCSEQ");
	map.insert("PHUONGPHAPDONOITYPE-ODB", "FCSEQ");
	map.insert("PHUONGPHAPDOTYPE-ODB", "FCSEQ");
	map.insert("PHUONGPHAPTLTYPE-ODB", "FCSEQ");
	map.insert("QUANLYSOPHIEUXUAT-ODB", "FCSEQ");
	map.insert("QUOCGIA-ODB", "FCSEQ");
	map.insert("SONGUPHAP-ODB", "FCSEQ");
	map.insert("TANG-ODB", "FCSEQ");
	map.insert("THON-ODB", "FCSEQ");
	map.insert("TINHTRANGMOCTYPE-ODB", "FCSEQ");
	map.insert("TINHTRANGTENID-ODB", "SEQ");
	map.insert("TINH-ODB", "FCSEQ");
	map.insert("TONKHO-ODB", "FCSEQ");
	map.insert("TULIEUANHHANGKHONG-ODB", "FCSEQ");
	map.insert("TULIEUANHVETINH-ODB", "FCSEQ");
	map.insert("TULIEUBANDOGIAY-ODB", "SEQ");
	map.insert("TULIEUBANDO-ODB", "FCSEQ");
	map.insert("TULIEUCSDLNENDIALY-ODB", "SEQ");
	map.insert("TULIEUDIEMDOCAOGEOID-ODB", "SEQ");
	map.insert("TULIEUDIEMDOCAOGEOID-ODB1", "SEQ1");
	map.insert("TULIEUDIEMDOCAO-ODB", "FCSEQ");
	map.insert("TULIEUDIEMTOADO-ODB", "FCSEQ");
	map.insert("TULIEUDIEMTRONGLUC-ODB", "FCSEQ");
	map.insert("TULIEUDVHC-ODB", "FCSEQ");
	map.insert("TULIEUTRAMGPS-ODB", "FCSEQ");
	map.insert("TULIEUTYPE-ODB", "FCSEQ");
	map.insert("TULIEU-ODB", "FCSEQ");
	map.insert("TYLETYPE-ODB", "FCSEQ");
	map.insert("XATRUYCAP-ODB", "FCSEQ");
	map.insert("XA-ODB", "FCSEQ");
}

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		qDebug() << "USAGE: " << argv[0] << " path";
		return 1;
	}

	QMap<QString, QString> map;
	init(map);

    const QString& dir = argv[1];
	QStringList result;
	QDirIterator it(dir, QStringList() << "*-odb.cxx", QDir::Files, QDirIterator::Subdirectories);
	while (it.hasNext())
	{
		const QString& fileName = it.next();
		QFileInfo fileInfo(fileName);
		const QString& baseName = fileInfo.baseName().toUpper();
		if (!map.contains(baseName))
			continue;

		QString rep = QString("_") + map[baseName];

		const QString& fileNameBak = fileName + ".bak";
		QFile::copy(fileName, fileNameBak);
		QFile::remove(fileName);

		QFile fileSrc(fileNameBak);
		QFile fileDst(fileName);

		if (fileSrc.open(QIODevice::ReadOnly | QIODevice::Text))
		{
			if (fileDst.open(QIODevice::WriteOnly | QIODevice::Text))
			{
				QTextStream reader(&fileSrc);
				QTextStream writer(&fileDst);
				QString text = reader.readAll();
				text.replace("_seq", rep);
				writer << text;
				fileDst.close();
				result.append(fileName);
			}
			else
			{
				qCritical() << "Cannot write file";
				QFile::copy(fileNameBak, fileName);
			}
			fileSrc.close();
		}
		else
		{
			qCritical() << "Cannot read file";
			QFile::copy(fileNameBak, fileName);
			
		}
		QFile::remove(fileNameBak);
	}

	for (const auto& r : result)
		qDebug() << "Repaired: " << r;

	return 0;
}
