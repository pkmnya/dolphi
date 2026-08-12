#include "../common/lang_unpack.h"

const wchar_t *TR(StrId id) {
  static const wchar_t *strings[SID_COUNT][4] = {
      {L"Install Directory - %s", L"安装目录 — %s", L"インストール先 — %s",
       L"Папка установки — %s"},
      {L"Installing %s", L"正在安装 %s", L"%s をインストール中",
       L"Установка %s"},
      {L"Installation of %s Complete!", L"安装 %s 完成！",
       L"%s のインストールが完了しました！", L"Установка %s завершена!"},
      {L"Next", L"下一步", L"次へ", L"Далее"},
      {L"Browse...", L"浏览...", L"参照...", L"Обзор..."},
      {L"Finish", L"完成", L"完了", L"Готово"},
      {L"Close", L"关闭", L"閉じる", L"Закрыть"},
      {L"Cancel (Esc)", L"取消 (Esc)", L"キャンセル (Esc)", L"Отмена (Esc)"},
      {L"Pause (Alt+P)", L"暂停 (Alt+P)", L"一時停止 (Alt+P)",
       L"Пауза (Alt+P)"},
      {L"Resume (Alt+P)", L"继续 (Alt+P)", L"再開 (Alt+P)",
       L"Возобновить (Alt+P)"},
      {L"Create Desktop Shortcut", L"创建桌面快捷方式",
       L"デスクトップショートカットを作成", L"Создать ярлык на рабочем столе"},
      {L"Auto close on complete", L"完成后自动关闭", L"完了時に自動で閉じる",
       L"Автозакрытие по завершении"},
      {L"I have read and agree to the license", L"我已阅读并同意以上协议",
       L"利用規約を読み、同意します", L"Я прочитал и согласен с лицензией"},
      {L"Extraction Complete!", L"解压完成！", L"展開完了！",
       L"Распаковка завершена!"},
      {L"CRC64: OK ✓", L"CRC64: 正常 ✓", L"CRC64: 正常 ✓", L"CRC64: ОК ✓"},
      {L"CRC64: Checking...", L"CRC64: 检验中", L"CRC64: 確認中...",
       L"CRC64: Проверка..."},
      {L"Extracting...", L"正在解压...", L"展開中...", L"Извлечение..."},
      {L"(No License)", L"（无用户协议）", L"（利用規約なし）",
       L"(Без лицензии)"},
      {L"Error", L"错误", L"エラー", L"Ошибка"},
      {L"Warning", L"警告", L"警告", L"Предупреждение"},
      {L"Info", L"提示", L"情報", L"Информация"},
      {L"Are you sure you want to cancel extraction?", L"确定要取消解压吗？",
       L"展開をキャンセルしますか？", L"Отменить распаковку?"},
      {L"Cancel Confirmation", L"取消确认", L"キャンセルの確認",
       L"Подтверждение отмены"},
      {L"Please read and agree to the license first.",
       L"请先阅读并同意用户协议。", L"利用規約を読んで同意してください。",
       L"Пожалуйста, сначала прочитайте и согласитесь с лицензией."},
      {L"Please select install directory.", L"请选择安装目录。",
       L"インストール先を選択してください。",
       L"Пожалуйста, выберите папку установки."},
      {L"This package modifies the system registry.\r\nIf you do not trust the "
       L"source, do NOT continue.",
       L"该安装包包含对系统注册表的修改项,如果您无法信任该安装包来源,"
       L"请勿继续安装\r\n",
       L"このパッケージはレジストリを変更します。\r\n提供元を信頼できない場合は"
       L"続行しないでください。",
       L"Этот пакет изменяет реестр.\r\nЕсли вы не доверяете источнику, НЕ "
       L"продолжайте."},
      {L"Install failed, code: %u", L"安装失败，错误码: %u",
       L"インストール失敗、エラーコード: %u", L"Ошибка установки, код: %u"},
      {L"File in use, cannot write.\nPlease close the program and click "
       L"Retry:\n\n%s",
       L"文件被占用，无法写入。\n请关闭相关程序后点击“重试”：\n\n%s",
       L"ファイルが使用中のため書き込めません。\n関連プログラムを閉じて「再試行"
       L"」をクリックしてください：\n\n%s",
       L"Файл используется, запись невозможна.\nЗакройте программу и нажмите "
       L"«Повторить»:\n\n%s"},
      {L"Access Denied.\nIf installing to system folders (e.g. Program Files), "
       L"cancel this operation, right-click and run as Administrator.\n\n%s",
       L"权限不足，拒绝访问。\n如果你试图解压到系统目录（如 Program "
       L"Files），请取消当前操作，并右键选择“以管理员身份运行”本程序。\n\n%s",
       L"アクセスが拒否されました。\nシステムフォルダ (Program Filesなど) "
       L"へは、キャンセル後「管理者として実行」してくださ"
       L"い。\n\n%s",
       L"Отказано в доступе.\nПри установке в системные папки (напр., "
       L"Program Files), отмените и запустите от имени администратора.\n\n%s"},
      {L"This file is not a valid Dolphi SFX archive.\n(Footer magic not "
       L"found, file may be corrupted)",
       L"此文件不是有效的 Dolphi 自解压包。\n（未找到 Footer "
       L"魔数，可能已被破坏）",
       L"無効なDolphi自己解凍書庫です。\n("
       L"フッターマジック不在。破損の可能性有)",
       L"Неверный SFX архив Dolphi.\n(Магическое число не найдено, "
       L"файл может быть поврежден)"},
      {L"Cannot open self EXE file.", L"无法打开自身 EXE 文件。",
       L"自身のEXEファイルを開けません。",
       L"Не удалось открыть собственный EXE файл."},
      {L"Cannot get file size.", L"无法获取文件大小。",
       L"ファイルサイズを取得できません。",
       L"Не удалось получить размер файла."},
      {L"Cannot re-open self EXE file.", L"无法二次打开自身 EXE。",
       L"自身のEXEファイルを再度開けません。",
       L"Не удалось повторно открыть собственный EXE файл."},
      {L"Failed to read Manifest.", L"读取 Manifest 失败。",
       L"Manifestの読み込みに失敗しました。",
       L"Не удалось прочитать Manifest."},
      {L"Manifest format error.", L"Manifest 格式错误。",
       L"Manifestのフォーマットエラーです。", L"Ошибка формата Manifest."},
      {L"CRC64 check failed, the archive may be corrupted!",
       L"CRC64 校验失败，压缩包可能已损坏！",
       L"CRC64チェックに失敗しました。書庫が破損している可能性があります！",
       L"Ошибка проверки CRC64, архив может быть поврежден!"},
      {L"Incorrect password.", L"密码错误", L"パスワードが間違っています",
       L"Неверный пароль"},
      {L"Installation in progress, please wait.", L"安装进行中，请等待完成。",
       L"インストール中、完了までお待ちください。",
       L"Установка в процессе, подождите."},
      {L"Failed to create file (ErrorCode: %u).\nThe file may be occupied or "
       L"access is denied:\n\n%s",
       L"文件创建失败 (错误码: %u)。\n文件可能被占用或权限不足：\n\n%s",
       L"ファイルの作成に失敗しました (エラーコード: "
       L"%u)。\nファイルが使用中かアクセスが拒否されています：\n\n%s",
       L"Не удалось создать файл (Код: %u).\nВозможно, файл занят или нет "
       L"доступа:\n\n%s"},
      {L"Failed to create directory (ErrorCode: %u).\nPlease check if the "
       L"drive exists or if you have write permission:\n\n%s",
       L"无法创建目录 (错误码: "
       L"%u)。\n请检查盘符是否存在或是否具有写入权限：\n\n%s",
       L"ディレクトリを作成できません (エラーコード: "
       L"%u)"
       L"。\nドライブが存在するか、または書き込み権限があるか確認してください："
       L"\n\n%s",
       L"Не удалось создать каталог (Код: %u).\nПроверьте, существует ли диск "
       L"и есть ли права на запись:\n\n%s"},
      {L"Elapsed: %s", L"已用时间: %s", L"経過時間: %s", L"Прошло: %s"},
      {L"ETA: %s", L"剩余时间: %s", L"残り時間: %s", L"Осталось: %s"},
      {L"Processed: %s / %s", L"已处理: %s / %s", L"処理済み: %s / %s",
       L"Обработано: %s / %s"},
      {L"Speed: %s/s", L"速度: %s/s", L"速度: %s/s", L"Скорость: %s/s"},
      {L"Data validation failed: The file manifest is abnormally large (over "
       L"1GB) and has been blocked for safety. If this is intentional, please "
       L"contact the developer.",
       L"数据校验失败：文件清单异常庞大（超过1GB），为确保安全已阻断。如果这是"
       L"有意的行为，请联系开发者。",
       L"データ検証に失敗しました: ファイルマニフェストが異常に大きいため "
       L"(1GB超過)"
       L"、安全のためにブロックされました。意図的な動作である場合は開発者にお問"
       L"い合わせください。",
       L"Сбой проверки данных: Манифест файлов аномально велик (более 1 ГБ) и "
       L"был заблокирован в целях безопасности. Если это сделано намеренно, "
       L"свяжитесь с разработчиком."},
      {L"The file is being used by the following process(es):\n%s\n\nDo you "
       L"want to forcefully close them and retry?\n(Tip: If not closed, "
       L"extraction may be incomplete)",
       L"文件被占用：\n%s\n\n强制关闭并重试？\n("
       L"提示：如果不关闭可能会导致不完整)",
       L"以下のプロセスが使用中:\n%s\n\n強制終了して再試行しますか？\n"
       L"(ヒント: 終了しないと不完全になる可能性があります)",
       L"Файл используется:\n%s\n\nПринудительно закрыть и повторить?\n"
       L"(Совет: Иначе извлечение будет неполным)"},
      {L"Dolphi Unpacking: %s", L"Dolphi 正在解压: %s", L"Dolphi 展開中: %s",
       L"Dolphi Извлечение: %s"},
      {L"Dolphi Unpacking", L"Dolphi 正在解压", L"Dolphi 展開中",
       L"Dolphi Извлечение"},
      {L"%s Installer", L"%s 安装程序", L"%s インストーラ", L"%s Установщик"},
      {L"Missing split volume!", L"分卷缺失！", L"分割ボリュームが不足！",
       L"Отсутствует разделенный том!"},
      {L"Insufficient disk space!", L"磁盘空间不足！",
       L"空き容量が不足しています！", L"Недостаточно места на диске!"},
      {L"You are currently running under a special restricted Windows user "
       L"account.\r\n\r\nThis installer modifies the Windows registry.\r\nIf "
       L"you use \"Run as administrator\", your current account may be unable "
       L"to launch the uninstaller or create shortcuts, and third-party "
       L"features that rely on the registry may not work properly.\r\n\r\nIt "
       L"is recommended that you manually switch to an administrator user's "
       L"desktop before installing.\r\n\r\nPlease note:\r\nRegistry-related "
       L"features, uninstallation, and shortcuts are only available for the "
       L"account used during installation.\r\nYou can still try launching the "
       L"installer without using \"Run as administrator\", which is likely to "
       L"work normally.",
       L"检测到当前为 Windows "
       L"特殊受限用户。\r\n\r\n本安装包包含注册表修改。\r\n如果您使用\"以管理员"
       L"身份运行\"，当前用户可能无法调用卸载程序或创建快捷方式，且基于注册表的"
       L"第三方功能可能失效。\r\n\r\n建议手动切换至管理员用户的桌面下安装。\r\n"
       L"\r\n请注意：\r\n注册表、卸载及快捷方式相关功能仅对安装时的账户生效。\r"
       L"\n您仍然可以尝试不使用\"以管理员身份运行\"启动安装程序，这样有较大概率"
       L"仍然能够正常工作。",
       L"現在、特殊な制限付き Windows ユーザーとして実行されています。\r\n\r\n"
       L"このインストーラーにはレジストリ変更が含まれます。\r\n"
       L"「管理者として実行」した場合、現在のユーザーではアンインストーラの起動"
       L"や\r\n"
       L"ショートカットの作成ができず、レジストリ機能が動作しない可能性がありま"
       L"す。\r\n"
       L"手動で管理者ユーザーに切り替えてインストールすることを推奨します。\r\n"
       L"\r\n"
       L"「管理者として実行」せずに起動すると、正常に動作する可能性があります"
       L"。",
       L"Вы используете ограниченную учетную запись Windows.\r\n\r\n"
       L"Установщик изменяет реестр. При «Запуске от имени администратора» "
       L"текущий\r\n"
       L"пользователь не сможет создавать ярлыки, запускать деинсталлятор, и "
       L"функции\r\n"
       L"реестра могут не работать.\r\nРекомендуется сменить пользователя на "
       L"администратора.\r\n\r\n"
       L"Запуск без прав администратора может сработать нормально."},
      {L"File Conflict", L"发现同名文件", L"同名ファイルの検出",
       L"Конфликт файлов"},
      {L"The target file already exists. Overwrite?",
       L"目标文件已存在，是否覆盖？",
       L"対象ファイルは既に存在します。上書きしますか？",
       L"Целевой файл уже существует. Перезаписать?"},
      {L"&Yes (Y)", L"是(&Y)", L"はい(&Y)", L"&Да (Y)"},
      {L"Yes to &All (A)", L"全部是(&A)", L"すべてはい(&A)",
       L"Да для &всех (A)"},
      {L"&No (N)", L"否(&N)", L"いいえ(&N)", L"&Нет (N)"},
      {L"No to A&ll (O)", L"全部否(&O)", L"すべていいえ(&O)",
       L"Нет для вс&ех (O)"},
      {L"OK", L"确定", L"確認", L"ОК"},
      {L"Password Required", L"请输入密码", L"パスワードが必要です",
       L"Требуется пароль"},
      {L"This package or file requires a password to continue:",
       L"此安装包或文件需要输入密码才能继续：",
       L"このパッケージはパスワードが必要です:",
       L"Для продолжения требуется пароль:"},
      {L"Unexpected error: The package did not specify a shortcut target, "
       L"attempting to find the first .exe file to use as startup item.",
       L"意外的错误:安装包未指定快捷方式目标，将尝试寻找第一个 .exe "
       L"文件作为启动项。",
       L"エラー: ショートカット先未指定。最初の.exeを検索します。",
       L"Ошибка: цель ярлыка не указана, поиск первого .exe."},
      {L"Information", L"提示", L"情報", L"Информация"},
      {L"Install Directory:\r\n%s", L"解压目录:\r\n%s",
       L"インストール先:\r\n%s", L"Папка установки:\r\n%s"},
      {L"Checking permissions...", L"检查权限...", L"権限を確認中...",
       L"Проверка разрешений..."},
      {L"Starting extraction...", L"开始解压...", L"展開を開始します...",
       L"Начало извлечения..."},
      {L"Extracting data...", L"正在解压数据...", L"データを展開中...",
       L"Извлечение данных..."},
      {L"Verifying CRC...", L"CRC校验中...", L"CRCを確認中...",
       L"Проверка CRC..."},
      {L"The package has a built-in uninstaller and will write to the "
       L"registry. If you're concerned, don't continue.",
       L"该安装包内置了卸载程序,会向注册表填写卸载信息,如果您担心安全问题,"
       L"请不要继续安装",
       L"このパッケージはアンインストーラを内蔵しており、レジストリに書き込みま"
       L"す。心配な場合は続行しないでください。",
       L"Пакет содержит встроенный деинсталлятор и запишет данные в реестр. "
       L"Если вы беспокоитесь, не продолжайте."},
      {L"Launch program immediately", L"立即启动程序",
       L"すぐにプログラムを起動する", L"Запустить программу немедленно"},
      {L"Cannot create shortcut: No executable file exists in the package.", 
       L"无法创建快捷方式：包内不存在可执行文件。", 
       L"ショートカットを作成できません：パッケージ内に実行可能ファイルが存在しません。", 
       L"Невозможно создать ярлык: В пакете нет исполняемого файла."}};
  return strings[id][(int)g_Lang];
}