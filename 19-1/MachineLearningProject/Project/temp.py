from bs4 import BeautifulSoup as bs
import urllib.request

# OUTPUT_FILE_NAME = 'output.txt'
# URL = 'https://news.naver.com/main/read.nhn?mode=LSD&mid=sec&sid1=100&oid=052&aid=0001292648'


# def get_text(URL):
#     source_code_from_URL = urllib.request.urlopen(URL)
#     soup = bs(source_code_from_URL, 'lxml', from_encoding='utf-8')
#     text = ''
#     for item in soup.find_all('div', id='articleBodyContents'):
#         text = text + str(item.find_all(text=True))

#     return text

# def main():
#     open_output_file = open(OUTPUT_FILE_NAME, 'w')
#     result_text = get_text(URL)
#     open_output_file.write(result_text)
#     open_output_file.close()

# if __name__ == '__main__':
#     main()
print(len('기자 ='))