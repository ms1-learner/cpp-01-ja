# MS1チャレンジガイド

チャレンジはMS1の重要なコンポーネントであり、チャレンジに取り組むことで学んだことを実際に活用できるようになります。各ユニットの最後に1つまたは複数のチャレンジが用意されています。これまで学んだことにもとづいて取り組んでください。各チャレンジには一連の要件と手順があります。チャレンジの要件にはそのユニット以外で学んだスキルも含まれていることがあるため、カリキュラムに沿ってこれまで学んできたすべてのスキルを組み合わせて問題を解く必要があります。

## チャレンジにアクセスする
各ユニットの最後に、そのユニットの各チャレンジへのアクセス手順が書かれたページがあります。手順のページには、GitHub上のチャレンジリポジトリへのリンクと、リポジトリ内の特定のチャレンジへのパスが記載されています。

一般にリンクの構造は次のようになっています。

`https://github.com/ms1-learner/<学習パス>-<モジュール番号>-<言語>`

たとえば、日本語でC++学習パスを学んでいる場合、次のリンクでモジュール1のすべてのチャレンジにアクセスできます。

`https://github.com/ms1-learner/cpp-01-ja`

手順のページに記載されている次のようなリポジトリのパスをたどると、各チャレンジにアクセスできます。

`01_introduction_to_cpp/01_challenge`

## チャレンジリポジトリの設定
チャレンジに取り組んで提出するには、次の手順を完了する必要があります。

> GitとGitHubに慣れていなくても心配はいりません。このガイドには必要な手順が詳細に記載されています。GitとGitHubの詳細については、この学習パスに含まれているアジャイル開発のモジュールで学びます。

GitHubでクローンするリポジトリに移動します。例として、リポジトリ `https://github.com/ms1-learner/cpp-01-ja` をクローンします。

<img width="1840" alt="Screenshot 2023-12-21 at 18 03 45" src="https://github.com/ms1-learner/cpp-01-ja/assets/5623716/b1793687-0e67-41e5-aa58-5e72cdb3eaf0">

緑色の [**Code**] ボタンを選択し、リポジトリの [**HTTPS**] のURLをコピーします。

<img width="1840" alt="Screenshot 2023-12-21 at 18 05 44" src="https://github.com/ms1-learner/cpp-01-ja/assets/5623716/151341d7-508c-441e-ab89-becb6873499d">

パソコンでターミナルを開き、リポジトリのクローン先となるフォルダに移動します。たとえば、Documentsフォルダに移動するには (このフォルダがある場合)、`cd Documents` と入力してからenterキーまたはreturnキーを押します。

<img width="920" alt="Screenshot 2023-11-29 at 14 26 27" src="https://github.com/ms1-learner/cpp-01-ja/assets/5623716/cb9da8e6-2ff5-46a0-80d3-383bec80d6f7">

Documentsフォルダに移動した後、`git clone` に続けて先ほどコピーしたリポジトリのURLを入力し、EnterキーまたはReturnキーを押します。

<img width="920" alt="Screenshot 2023-11-29 at 14 26 38" src="https://github.com/ms1-learner/cpp-01-ja/assets/5623716/42d744a7-cc48-4dd5-8c5e-f568d323f064">

これでDocumentsフォルダにリポジトリがクローンされます。

クローンしたリポジトリに移動します。

```bash
cd cpp-01-ja
```

次のGitコマンドを実行します。

```bash
git remote rename origin ms1
```

このリポジトリにはまた戻ってくるので、ターミナルを閉じずにそのままにしてください。

次に、GitHubのEnterpriseアカウントで空のリポジトリを新規作成する必要があります。

右上のプロフィールアイコンから [**Repositories**] ページに移動します。

<img width="1840" alt="Screenshot 2023-12-21 at 12 55 54" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/15a2fc85-ac92-41a6-9179-cbc9c55818b4">

緑色の [**New**] ボタンを選択します。

[**Create a new repository**] ページで [**Owner**] に自分を選択し、[**Repository name**] に先ほどクローンしたリポジトリの名前を指定します (この場合は `cpp-01-ja`)。他の設定はすべてデフォルトのままにしておきます。 

<img width="1840" alt="Screenshot 2023-12-21 at 18 14 17" src="https://github.com/ms1-learner/cpp-01-ja/assets/5623716/dcf11456-4d14-48d9-865b-160c5d12c42e">

次の画面で [**HTTPS**] を選択し、下のボックスからGitコマンドをコピーします。

<img width="1840" alt="Screenshot 2023-12-21 at 18 14 39" src="https://github.com/ms1-learner/cpp-01-ja/assets/5623716/2727b854-1c26-4128-8830-49a802642cb0">

これらのコマンドを先ほどのターミナル (クローン先のリポジトリ内) に貼り付けます。

```bash
git remote add origin https://github.tmc-stargate.com/alexander-bolinsky/cpp-01-ja.git
git branch -M main
git push -u origin main
```

GitHubユーザー名の入力を求められるので、アカウント名を入力してEnterキーを押します。

その後、GitHubパスワードの入力を求められますが、まだ何も入力しないでください。次のステップを実行してから、もう一度このターミナルに戻ってパスワードを入力します。

 GitHubに戻り、プロフィールの [**Settings**] ページに移動します。
 
<img width="1840" alt="Screenshot 2023-12-21 at 18 15 30" src="https://github.com/ms1-learner/cpp-01-ja/assets/5623716/4d0deeaf-f03c-48f7-9b9d-d85adeb17a83">

左側のナビゲーションパネルの下部にあるリンクをクリックして [**Developer settings**] ページにアクセスします。

<img width="1840" alt="Screenshot 2023-12-21 at 13 46 57" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/fbec620a-bd83-44ab-87b4-e2585e45cde7">

左側のナビゲーションパネルから [**Personal access tokens**] を選択し、[**Generate new token**] ボタンをクリックします。

<img width="1840" alt="Screenshot 2023-12-21 at 13 47 15" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/ed1a3cec-a736-49c7-bed3-34980c14d654">

[**Note**] にテキストを自由に入力し、有効期限 ([**Expiration**]) を90日に設定します。[**repo**] の横にあるチェックボックスをオンにします。

<img width="1840" alt="Screenshot 2023-12-21 at 13 49 29" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/f3206fdc-79c1-47d1-b242-bfdd4fc7c538">

下方向にスクロールして緑色の [**Generate token**] ボタンをクリックし、個人用アクセストークンを生成します。

<img width="1840" alt="Screenshot 2023-12-21 at 13 49 37" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/8c5b4dd3-15c3-4d56-9128-6dde7563a0fd">

この個人用アクセストークンをコピーし、先ほどGitHubのパスワード入力を求められたターミナルに貼り付けてEnterキーを押します。

<img width="1840" alt="Screenshot 2023-12-21 at 13 50 01" src="https://github.com/ms1-learner/cpp-01-en/assets/5623716/66f20e9f-7060-4055-b359-d6ce93cd133d">

完了すると、ターミナルには次のような出力が表示されます。

```bash
To https://github.tmc-stargate.com/alexander-bolinsky/cpp-01-ja.git
* [new branch]      main -> main
branch 'main' set up to track 'origin/main'.
```

GitHubで新規作成したリポジトリに戻ると、クローン元のリポジトリの内容が反映されているはずです。

Visual Studio Codeを使ってリポジトリを開きます。

<img width="1840" alt="Screenshot 2023-11-29 at 14 28 20" src="https://github.com/ms1-learner/cpp-01-ja/assets/5623716/331a66ec-963f-4f2f-b8d6-fc4e6e0022ab">

<img width="1840" alt="Screenshot 2023-11-29 at 14 29 08" src="https://github.com/ms1-learner/cpp-01-ja/assets/5623716/03f218d0-915b-4b1c-84a7-58665b63ac61">

このリポジトリ内のフォルダにすべてのチャレンジが含まれています。これらの各フォルダ名には関連するユニットの名前と番号が付いています。

<img width="1840" alt="Screenshot 2023-11-29 at 14 29 40" src="https://github.com/ms1-learner/cpp-01-ja/assets/5623716/93561841-5464-4535-b1ac-413068d8e791">

これで、チャレンジに解答する準備が整いました。

## チャレンジに取り組んで提出する
チャレンジのREADMEファイルには、課題の説明だけが記載されていることもあれば、一部が欠けている未完成のコードが記載されていることも、解答のベースとなるコードが記載されていることもあります (チャレンジでこれらのコードを完成させていくことになります)。

たとえば、チャレンジで2つの数値を加算するC++プログラムを作成する場合、解答は次のようになります。

> 注: 例として記載しているだけなので、このコードを理解する必要はありません。

```cpp
#include <iostream>
#include <string>

int add(int a,int b) {
   return a + b;
}
int main() {
    std::cout << "The result of adding 5 and 3 is " + std::to_string(add(5,3)) << std::endl;
    return 0;
}
```

このプログラムを `main.cpp` というファイルに保存したものとします。では、この解答をローカルリポジトリに保存してからGitHubにプッシュしましょう。

## 解答を準備して採点用にプッシュする

解答を準備してGitHubリポジトリにプッシュするには、まずこの解答をコミット (commit) する必要があります。コミットするには、ターミナルで次のコマンドを実行します。

`git add .`

`git commit -m "Submit challenge for grading"`

1つ目のコマンドでは、この新規ファイルを追跡するようGitに指示しています。2つ目のコマンドでは、“Submit challenge for grading” (採点用にチャレンジを提出) というメッセージを付けて保存しています。

<img width="1840" alt="Screenshot 2023-11-29 at 14 31 47" src="https://github.com/ms1-learner/cpp-01-ja/assets/5623716/365cb8f3-71da-4ec3-ba67-fb96be5aefe5">

解答をリモートリポジトリにプッシュする準備が整いました。

`git push`

<img width="1840" alt="Screenshot 2023-11-29 at 14 32 14" src="https://github.com/ms1-learner/cpp-01-ja/assets/5623716/93cab46a-deb5-410b-80cf-48877cc60935">

次に、GitHubリポジトリに移動します。変更が正常にプッシュされているはずです。

## 変更をプルする
クローン元のリポジトリで内容が変更され、インストラクターから最新の変更を「プル」するように指示された場合は、クローン先のリポジトリで次のGitコマンドを実行してください。

```bash
git pull ms1 main
```

## MS1でリンクを送信する
自分のGitHubリポジトリに解答をプッシュしたら、MS1のチャレンジでそのGitHubへのリンクを送信する必要があります。リポジトリへのリンクではなく、該当するチャレンジへのリンクを送信してください。

例: `https://github.com/abolinsky/cpp-01-ja/tree/main/01_introduction_to_cpp/01_challenge`

MS1の該当するチャレンジページに移動します。

自分のGitHubリポジトリへのリンクをページの下部に追加して [提出] をクリックしてください。

<img width="849" alt="Screenshot 2023-12-21 at 18 26 47" src="https://github.com/ms1-learner/cpp-01-ja/assets/5623716/bb6e099e-82c4-4162-b41b-690cd2efc257">

## 自分のリポジトリにインストラクターを追加する
インストラクターが解答を確認して採点できるよう、インストラクターをコラボレーターとしてGitHubリポジトリに追加する必要があります。

コラボレーターを追加するには、[**Settings**] ボタンをクリックします。

<img width="1840" alt="Screenshot 2023-12-21 at 18 28 48" src="https://github.com/ms1-learner/cpp-01-ja/assets/5623716/8f3bdf20-31e5-43e4-8f4b-4654bf471db0">

左側のナビゲーションパネルにある [**Collaborators**] をクリックします。 

[**Manage access**] にある [**Add people**] をクリックし、担当インストラクターのGitHubのユーザー名またはメールアドレスを追加します。

<img width="1840" alt="Screenshot 2023-12-21 at 18 28 56" src="https://github.com/ms1-learner/cpp-01-ja/assets/5623716/9a755aef-8b2e-4887-8d61-efb9e30b07dd">

<img width="1840" alt="Screenshot 2023-12-21 at 18 29 07" src="https://github.com/ms1-learner/cpp-01-ja/assets/5623716/09018546-b2ae-4393-aab8-5d35cdc684c4">

<img width="1840" alt="Screenshot 2023-12-21 at 18 29 15" src="https://github.com/ms1-learner/cpp-01-ja/assets/5623716/6017af09-918d-446d-b38b-4f50035f23df">

<img width="1840" alt="Screenshot 2023-12-21 at 18 29 22" src="https://github.com/ms1-learner/cpp-01-ja/assets/5623716/c193e4ce-ab30-43db-9b72-9a502f0dfd83">

これで解答がアップロードされ、インストラクターが確認できるようになりました。

すばらしい解答を期待しています。
