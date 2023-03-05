# Pangaea パーツリスト

標準構成での組み立てに必要な部品の一覧です。
親指モジュールのキー数を減らす場合はその分のキースイッチ、ソケット、ダイオードが減少します。例えば標準の5キー構成から3キー構成に変更すると、左右でマイナス2ずつでで必要パーツ数は60-2\*2=58となります。
数字行を無くす場合は、左右でマイナス6ずつで、必要パーツ数は60-6\*2=48となります。

## 必須部品
- JST SHコネクタ 4p レセプタクル サイド型
  - <https://akizukidenshi.com/catalog/g/gC-16800/>
    基板用コネクタ　４Ｐ　面実装　サイド型　（５個入）| 秋月電子通商

- JST SHコネクタ 4p プラグ付きケーブル
  - リバースケーブルと呼ばれる、両端のピンアサインが同一になるタイプを使用してください。
  - 互換品がメカトロニクス系の分野で「qwiic」と呼ばれ普及しているようです。
  - <https://akizukidenshi.com/catalog/g/gC-15884/>
    コネクタ付コード　４Ｐ　黒赤青黄　両端コネクタ付き 15cm 秋月電子通商

- ダイオード(スルーホールまたはchip部品) (4x4 + 1 + 4x2 + 1x5) x 2 = 60
  - 1N4148
    - <https://akizukidenshi.com/catalog/g/gI-00743/>
  - SMD
    - <https://shop.yushakobo.jp/products/a0800di-02-100>
  
- スイッチソケット (MXまたは choc 用) 30 x 2 = 60
  - Kailh Hot-Swappable PCB Socket
    - <https://shop.yushakobo.jp/products/a01ps>
    - <https://talpkeyboard.net/items/5e02c5405b120c792616bcf9>
  
- スイッチ  (MXまたは choc 用) 30 x 2 = 60
  - Cherry MX 互換スイッチ、5pin が安定です。お好きなモノで
  - choc スイッチ
    - Google it.
  
- Controller
  - Pro Micro x 2
  - <https://www.switch-science.com/catalog/6228/>
  - 現在の対応マイコンは Pro Micro ですが、今後、Raspbery Pi PicoやRP2040シリーズへの対応も検討されています。
  
- コンスルーピンヘッダ x 2
  - <https://shop.yushakobo.jp/products/31>
  - <https://talpkeyboard.stores.jp/items/5e056626d790db16e2889233>
  - コンスルーを使わず、ピンヘッダをはんだ付けして組み立てることもできます。
  
- Reset switch x 1
  - タクトスイッチ
  - <https://akizukidenshi.com/catalog/g/gP-08074/>
  - 左手側用
  
- Reset switch サイド型 x 1
  - THDP07-060CB <https://akizukidenshi.com/catalog/g/gP-08077/>
  - 右手側用
  
- 3.5mm TRRS ケーブル x 1
  - Google it.
  
- USB ケーブル x 1
  - Google it.
  
- M2 スタンドオフ (長さ8mm, 6mm, 3mm)
  - ASB-2008E
    <https://www.hirosugi-net.co.jp/shop/g/g67/>
  - ASB-2006E
    <https://www.hirosugi-net.co.jp/shop/g/g63/>
  - ASB-2003E
    <https://www.hirosugi-net.co.jp/shop/g/g57/>
  
  - 必要個数はビルドガイドを参照してください。
  
- M2 ネジ (長さ8mm, 3mm)
  - F-0208-E, 8mm
    - <https://www.hirosugi-net.co.jp/shop/g/g36908/>
  - 3mm
  
- ゴム足
  - ダイソー クッションゴム 14個入り など

## オプション部品
以下オプションです

- ワッシャ
  - 使用するとスムーズに可動部分が動きます
  - スプリングワッシャと組み合わせて使うと緩みがなく、かつ可動部分を動かしやすくなります。
  - Google it.
- スプリングワッシャ
  - 使用するとネジが緩みにくくなるため強くおすすめです
  - Google it.
- M1.4 ナット
  - M1.4ナットとネジをボトムプレートに取り付けた物をPCBの支柱として、スイッチソケットが緩みPCBが脱落することを防止できます。
  - [ステンレス鋼,2〜50個,din934 m1 m1.2 m1.4 m1.6 m2 m2.5 m3 m4 m5 m6 m8 m10 m12,黒アルミニウム六角ナット|ナッツ類| - AliExpress](https://ja.aliexpress.com/item/33011176338.html?spm=a2g0o.order_list.order_list_main.9.1817585a5QCSTx&gatewayAdapt=glo2jpn)
- M1.4 ネジ
  - [2/5/10/50/100個m1 m1.2 m1.4 m1.6 M2 M2.5 M3 M4 m5 m6 m8 DIN7985 304ステンレス鋼クロスプラスラウンドなべスクリューボルト|ネジ| - AliExpress](https://ja.aliexpress.com/item/32948746653.html?spm=a2g0o.order_list.order_list_main.19.21ef585as7vfU7&gatewayAdapt=glo2jpn)
  - 長さ4mmを使用（上記商品は実測4.3～4.4mm）
