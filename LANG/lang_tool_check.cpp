#include "lang_tool_check.h"

const wchar_t* TR(StrId id) {
    static const wchar_t* strings[SID_COUNT][4] = {
        {L"  [Error] File too small, not a valid Dolphi package\n", L"  [错误] 文件太小，不是有效的 Dolphi 包\n", L"  [エラー] ファイルが小さすぎます。有効な Dolphi パッケージではありません\n", L"  [Ошибка] Файл слишком мал, это недействительный пакет Dolphi\n"},
        {L"  [Error] Magic mismatch (Read 0x%08X, Expected 0x%08X)\n", L"  [错误] Magic 不匹配 (读到 0x%08X，期望 0x%08X)\n", L"  [エラー] Magic が一致しません (読み込み 0x%08X、期待値 0x%08X)\n", L"  [Ошибка] Несовпадение Magic (Считано 0x%08X, Ожидалось 0x%08X)\n"},
        {L"  [Error] Sum of segments exceeds file size, Footer corrupted!\n", L"  [错误] 段大小之和超过文件大小，Footer 数据损坏！\n", L"  [エラー] セグメントサイズの合計がファイルサイズを超過しています。Footerが破損しています！\n", L"  [Ошибка] Сумма размеров сегментов превышает размер файла, Footer поврежден!\n"},
        {L"  [Error] Cannot create output file (GetLastError=%u)\n", L"  [错误] 无法创建输出文件 (GetLastError=%u)\n", L"  [エラー] 出力ファイルを作成できません (GetLastError=%u)\n", L"  [Ошибка] Не удалось создать выходной файл (GetLastError=%u)\n"},
        {L"  [Error] Cannot read file (GetLastError=%u)\n", L"  [错误] 无法读取文件 (GetLastError=%u)\n", L"  [エラー] ファイルを読み込めません (GetLastError=%u)\n", L"  [Ошибка] Не удалось прочитать файл (GetLastError=%u)\n"},
        {L"  [Error] DataCRC64 mismatch! Expected: %016llX, Actual: %016llX\n", L"  [错误] DataCRC64 校验失败！期望: %016llX, 实际: %016llX\n", L"  [エラー] DataCRC64 の不一致！期待値: %016llX, 実際: %016llX\n", L"  [Ошибка] Несовпадение DataCRC64! Ожидалось: %016llX, Фактически: %016llX\n"},
        {L"  [OK] DataCRC64 verified: %016llX\n", L"  [正常] DataCRC64 校验通过: %016llX\n", L"  [OK] DataCRC64 検証済み: %016llX\n", L"  [ОК] DataCRC64 проверен: %016llX\n"},
        {L"  [Error] Manifest file count mismatch (Header: %u, Actual: %u)\n", L"  [错误] Manifest 文件数量不匹配 (标称: %u, 实际: %u)\n", L"  [エラー] Manifest のファイル数が一致しません (ヘッダー: %u, 実際: %u)\n", L"  [Ошибка] Несовпадение количества файлов Manifest (В заголовке: %u, Фактически: %u)\n"},
        {L"  [Error] Manifest total size mismatch (Header: %llu, Actual: %llu)\n", L"  [错误] Manifest 总大小不匹配 (标称: %llu, 实际: %llu)\n", L"  [エラー] Manifest の合計サイズが一致しません (ヘッダー: %llu, 実際: %llu)\n", L"  [Ошибка] Несовпадение общего размера Manifest (В заголовке: %llu, Фактически: %llu)\n"},
        {L"\n  [Warning] mpack parser error: %s\n", L"\n  [警告] mpack 解析结束时存在错误: %s\n", L"\n  [警告] mpack パーサーエラー: %s\n", L"\n  [Предупреждение] ошибка парсера mpack: %s\n"},
        {L"Usage: Drag & Drop EXE/.mpk\n", L"用法: 拖入 EXE 或.mpk 到此工具\n", L"使用: EXEまたは.mpkをドラッグ&ドロップ\n", L"Использование: Перетащите EXE или .mpk сюда\n"},
        {L"Name", L"名称", L"名前", L"Имя"},
        {L"Size", L"大小", L"サイズ", L"Размер"},
        {L"Packed Size", L"压缩大小", L"圧縮サイズ", L"Сжатый размер"},
        {L"Attr", L"属性", L"属性", L"Атрибуты"},
        {L"License / Declaration", L"声明 / 许可", L"ライセンス / 宣言", L"Лицензия / Декларация"},
        {L"Shortcuts", L"快捷方式", L"ショートカット", L"Ярлыки"},
        {L"Install Dir", L"安装目录", L"インストールディレクトリ", L"Каталог установки"},
        {L"(Not set in this package)", L"(此包未设定)", L"(このパッケージでは設定されていません)", L"(Не задано в этом пакете)"}
    };
    return strings[id][(int)g_Lang];
}
