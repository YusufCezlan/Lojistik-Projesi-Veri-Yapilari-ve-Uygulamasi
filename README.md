# Lojistik Yönetim Sistemi: Hibrit Veri Yapıları Uygulaması

Bu proje, bir lojistik firmasının şehirler arası ağını (Graf) ve paket sorgulama sistemini (Hash Table) yöneten hibrit bir veri yapısı uygulamasıdır.

## 👤 Öğrenci Bilgileri
- **Ad Soyad:** [Adını Buraya Yaz]
- **Öğrenci No:** 1250505031
- **Ders:** Veri Yapıları ve Algoritmalar Final Projesi

## 🛠 Kullanılan Teknikler
Okul numaramın son hanelerine göre projede aşağıdaki teknikler uygulanmıştır:
- **Hash Fonksiyonu:** Tip B (Folding Yöntemi)
- **Çakışma Yönetimi:** Açık Adresleme (Linear Probing)
- **Graf Gezinme:** DFS (Depth First Search)

## 📦 Proje Bileşenleri
1. **Hash Tablosu:** Paketlerin ID üzerinden O(1) karmaşıklığında sorgulanmasını sağlar.
2. **Graf Yapısı:** Şehirler arası lojistik ağını temsil eder.
3. **Hibrit Sistem:** Paket bilgilerini Hash Tablosundan çekip, rota planlamasını Graf üzerinden yapar.

## 🚀 Çalıştırma Talimatları
1. Projeyi bilgisayarınıza klonlayın.
2. Dev-C++ veya herhangi bir C derleyicisi ile `src` klasöründeki dosyaları bir proje olarak açın.
3. `F11` tuşuna basarak derleyin ve çalıştırın.

## 📊 Bellek İzleme
Proje çalıştırıldığında dinamik olarak oluşturulan yapıların (malloc) RAM adresleri ekrana basılır. Bu adresler kullanılarak hazırlanan teknik şemalar `docs/` klasöründeki raporda yer almaktadır.
