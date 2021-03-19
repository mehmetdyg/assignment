Uygulama nasıl kullanılır? 

- GitHub dan aldığınız dosyaları D: dizinine koyun.

- Uygulamayı açmak için D:\cstech_assignment_backup\build-Assignment-Desktop_Qt_5_9_2_MinGW_32bit-Release\release dosyasından Assignment.exe yi çalıştırın.

- Uygulama açıldıktan sonra "Choose File" butonuna basılarak bir .txt dosyası seçilir. 

- Daha sonra "Command Type" combobox ından komut tipi seçilir. (F - > arama, R -> değiştirme, D -> silme)

- F seçilmiş ise, aranacak değer "Text To Search" alanına yazılmalı ve ardından "Run Command" butonuna basılmalıdır. 
  Bu işlemin sonucunda bu kelimeden kaç tane bulunmuş ise bu "Number Of Words" alanına yazılır.

- R seçilmiş ise, "Text To Replace With" alanına yeni değer, "Text To Be Replaced" alanına değişecek olan değer yazılmalıdır.
  Bu işlemin sonucunda eski değer silinir ve yerine yeni değer yazılır.

- D seçilmiş ise "Text To Be Deleted" alanına silinmesi istenilen değer yazılmalıdır. 
  Bu işlemin sonucunda yazılan değer dosyadan silinir.


- NOT: Bilgisayarınızda bazı Qt library leri veya path leri bulunmuyor ise .exe dosyası açılırken hata alabilirsiniz. 
Böyle bir durumda iletişime geçmenizi rica ediyorum. Çünkü deployment anlamında Qt maalesef yetersiz kalabiliyor.